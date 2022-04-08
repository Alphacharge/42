/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:59:11 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/08 15:21:41 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = (const char *)s;
	while (n-- > 0)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
	// while ((p[i] != '\0') && (p[i] != c) && (i < n))
	// 	i++;
	// if ((p[i] == '\0' && p[i] != c) || (i == n && p[i] != c))
	// 	return (0);
	// else
	// 	return (&p[i]);