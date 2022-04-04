/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:59:32 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/04 15:13:37 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_comparef(char const *c, char const *ptr)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (ptr[j] != '\0')
			{
				if (c[i] == ptr[j])
					return (i+1);
				j++;
			}
		i++;
	}
	return (0);
}

static int	ft_compareb(char const *c, char const *ptr, int	len)
{
	int	j;
	
	j = 0;
	while (len >= 0)
	{
		j = 0;
		while (ptr[j] != '\0')
			{
				if (c[len] == ptr[j])
					return (len-1);
				j++;
			}
		len--;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		lens;
	int		pos1;
	int		pos2;
	int		length;
	char	*ptr;

	lens = ft_strlen(s1);
	pos1 = ft_comparef(s1, set);
	pos2 = ft_compareb(s1, set, lens);
	length = pos2 - pos1 + 1;
	ptr = malloc(length);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(ptr, &s1[pos1], length - 1);
	ptr[length] = '\0';
	return (ptr);
	
}
