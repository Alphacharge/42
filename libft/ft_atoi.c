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
static int	ft_isspace(char c)
{	
	if (c == '\t' || c == '\v' || c == '\f'
			|| c == '\r' || c == '\n' || c == ' ')
			return (1);
	return (0);
}

static unsigned int	ft_isillegal(unsigned int	i, int vz)
{	
	if ((i <= 2147483648 && vz == -1) || (i <= 2147483647 && vz == 1))
		return (0);
	else 
		return (1);
}
/*
int	ft_atoi(const char *str)
{
	char				*p;
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
}*/
int	ft_atoi(const char *str)
{
	char				*p;
	int				vz;
	unsigned int	c;

	p = (char *)str;
	vz = 1;
	c = 0;
	while (ft_isspace(*p))
		p++;
	if (*p == '-')
	{
		vz = -1;
		p++;
	}
	else if (*p == '+')
		p++;
	if (!ft_isdigit(*p))
		return (0);
	while (ft_isdigit(*p))
	{
		c = c * 10 + *(p++) - '0';
		if (ft_isillegal(c, vz))
			return (0);
	}
	return ((int)(c * vz));
}
