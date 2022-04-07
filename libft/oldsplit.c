/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:29:00 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/07 14:16:48 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchrpos(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	if (s[i] != c)
		return (0);
	else
		return (i);
}

static int	ft_count(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0' && *(s+1) != '\0')
	{
		if (*s == c && *(s+1) != c)
			i++;
		s++;
	}
	return (i);
}
static char *ft_string(const char *s, int st, int en)
{
	char *ptr;

	ptr = ft_calloc(en-st, 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr,s,en-st-1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc(ft_count(s, c)+2);
	if (ptr == NULL)
		return (NULL);
	while (ft_strchrpos(&s[start], c) > 0)
	{
		end = ft_strchrpos(&s[start], c);
		printf("start:%d\n", start);
		printf("end:%d\n", end);
		if ((end - start) > 1)
		{
			ptr[i] = ft_string(s, start, end);
			i++;
		}
		start = end+1;
	}
	ptr[i] = NULL;
	return (ptr);
}
