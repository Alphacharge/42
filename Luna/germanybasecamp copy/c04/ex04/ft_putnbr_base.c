/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:48:36 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/02 22:56:07 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_check_validity(base))
	{
		if (nbr == 0)
			write(1, base[0], 1);
		else
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nbr = -nbr
			}
			ft_convert_nbr(nbr, base);
		}
	}
	
}

int	ft_check_validity(char *base)
{
	int	i;
	char duplicate;
	int	a;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		duplicate = base[i];
		if (ft_find_same_character(base, duplicate, i))
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_find_same_character(char *str, char s, int i)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] == s && !(i == y))
			return (1);
		y++;
	}
	return (0);
}

void	ft_convert_nbr(int nbr, char *base)
{
	int i;
	char n;

	i = 0;
	n = nbr
	while (base[i] != '\0')
		i++;
	if (nbr != 0)
	{
		n = nbr / i;
		if (n / i  i)
		ft_convert_nbr(n, base);	
		ft_write_base_nbr(n, base);
	}
}

void ft_write_base_nbr(int n, char *base)
{
	char a;

	a = 0;
	a = 
	write(1, base_size[n - 1];)
}
