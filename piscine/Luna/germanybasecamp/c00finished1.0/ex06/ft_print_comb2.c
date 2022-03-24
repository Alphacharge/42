/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:26:26 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/23 12:22:28 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printeverything(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8'))
	{
		write(1, ", ", 2);
	}
}

void	ft_counting(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_printeverything(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			d = b + 1;
			c = a;
		}
		a++;
		b = '0';
		d = b + 1;
		c = a;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_counting(a, b, c, d);
}
