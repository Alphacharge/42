/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:59:11 by rbetz             #+#    #+#             */
/*   Updated: 2022/03/29 17:36:51 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while ((p[i] != '\0') && (p[i] != c) && (i < n))
		i++;
	if (((p[i] == '\0') && (p[i] != c)) || (i == n))
		return (0);
	else
		return (&p[i]);
}
