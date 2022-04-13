/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:19:54 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/11 20:21:36 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_arr(char **ptr, int words)
{
	words++;
	while (ptr[words] != NULL)
	{
		free(ptr[words]);
		words++;
	}
	free(ptr);
	return (NULL);
}

// static char	*ft_copy(const char *s, int i, int j)
// {
// 	char	*p;

// 	p = ft_calloc(j + 1, 1);
// 	if (p == NULL)
// 		return (NULL);
// 	ft_memcpy(p, &s[i - j + 1], j);
// 	return (p);
// }

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_wordcount(s, c);
	ptr = ft_calloc(words + 1, sizeof(char *));
	i = ft_strlen(s) - 1;
	while (i >= 0 && words > 0 && ptr != NULL)
	{
		if (s[i] != c)
		{
			j = 1;
			words--;
			while (s[i - j] != c && j <= i)
				j++;
			ptr[words] = ft_substr(s, i - j + 1, j); // u can use ft_substr instead of "ft_copy"
			if (ptr[words] == NULL)
				return (ft_free_arr(ptr, words)); // I saved u some lines here
			i = i - j + 1; // warum war hier ein + 1 kein unterschied 
		}
		if (i != 0)
			i--;
	}
	return (ptr);
}