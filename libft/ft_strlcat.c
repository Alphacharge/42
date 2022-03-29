/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:26:58 by rbetz             #+#    #+#             */
/*   Updated: 2022/03/29 17:41:27 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sl;
	size_t	dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if ((sl + dl) < dstsize)
		dstsize = sl + dl + 1;
//	if (dl < dstsize)
//		dstsize = dl;
	if (dstsize <= 0)
		return (sl + dl);
	ft_memmove(&dst[dl + 1], src, dstsize);
	dst[dstsize - 1] = '\0';
	return ((sl + dl));
}
