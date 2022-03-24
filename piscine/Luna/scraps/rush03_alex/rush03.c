/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asevcik <asevcik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:29:26 by asevcik           #+#    #+#             */
/*   Updated: 2021/11/20 12:59:05 by asevcik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int x);
void	body(int x, int y);

void	top(int x)
{
	while (x >= 1)
	{
		ft_putchar('A');
		x--;
		while (x > 1)
		{
			ft_putchar('B');
			x--;
		}
		if (x == 1)
			ft_putchar('C');
		x--;
	}
	ft_putchar(10);
}

void	body(int x, int y)
{
	int	temp_x;

	temp_x = x;
	while (y > 2)
	{
		ft_putchar('B');
		x = temp_x - 1;
		while (x > 1)
		{
			ft_putchar(32);
			x--;
		}
		if (x == 1)
			ft_putchar('B');
		ft_putchar(10);
		y--;
	}
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	top(x);
	body(x, y);
	if (y > 1)
		top(x);
}
