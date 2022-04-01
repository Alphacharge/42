/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:27:07 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/01 17:07:52 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char			*p;
	int				vz;
	unsigned int	c;
	unsigned int	i;
	int				m;

	p = (char *)str;
	vz = 1;
	c = 0;
	i = 0;
	m = 0;
	while (i < (unsigned int)ft_strlen(p))
	{
		if (ft_isdigit(p[i]) == 0)
		{
			if ((p[i] == '\t' || p[i] == '\v' || p[i] == '\f'
					|| p[i] == '\r' || p[i] == '\n' || p[i] == ' ')
				&& (c == 0) && (m == 0))
				i++;
			else if (((p[i] == '+') || (p[i] == '-')) && (c == 0) && (m == 0))
			{
				if (p[i] == '-')
					vz = -1;
				i++;
				m = 1;
			}
			else if (c > 0)
				return ((int)(c / 10 * vz));
			else
				return (0);
		}
		else
		{
			c = c + p[i] - '0';
			i++;
			if (p[i] != '\0')
				c = c * 10;
			if (c > 2147483648 && vz == -1)
				return (0);
			else if (c > 2147483647 && vz == 1)
				return (-1);
		}
	}
	return ((int)(c * vz));
}
/*
{
	unsigned int	v;

	// 1) Skip Whitespace
	while (ft_isspace(*s))
		s++;
	// 2) Check prefix sign
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	// 3) Return if not a number
	if (!is_digit(*s))
		return (0);
	// 4) Loop
	v = 0;
	while (is_digit(*s))
	{
		v = v * 10 + *(s++) - '0';
		if (is_illegal(v, sign))
			return (0);
		// ...
	}
	return (sign * v);
}
*/