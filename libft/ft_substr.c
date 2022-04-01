/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:08:36 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/01 17:07:29 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ptr;
	
	size = (size_t)ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(ptr, &s[start], len);
	ptr[len] = '\0';
	return (ptr);
}
