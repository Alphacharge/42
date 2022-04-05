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

static int	ft_isinset(char const c, char const *ptr)
{
	int	i;
	
	i = 0;
	while (ptr[i] != c && ptr[i] != '\0')
		i++;
	if (ptr[i] != '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		pos1;
	int		pos2;
	char		*ptr;

	pos1 = 0;
	pos2 = ft_strlen(s1);
	ptr = (char *)s1;
	while (ft_isinset(s1[pos1], set))
		pos1++;
	while (pos2 > pos1 && ft_isinset(s1[pos2], set))
		pos2--;
	if ((pos2 - pos1 + 1) > 1)
		ptr = malloc(pos2 - pos1 + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(ptr, &s1[pos1], pos2 - pos1);
	ptr[pos2 - pos1 + 1] = '\0';
	return (ptr);
}
