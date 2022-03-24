/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:27:09 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/20 22:18:05 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top_n_bottom_line(int x)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
}

void	ft_mainbody(int x, int y, int z)
{
	while (y > 2)
	{
		ft_putchar('|');
		if (x > 1)
		{
			while (x > 2)
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('|');
			x = z;
		}
		y--;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{	
	int	z;

	z = x;
	if (x > 0 && y > 0)
	{
		ft_top_n_bottom_line(x);
		ft_putchar('\n');
		x = z;
		if (y > 1)
		{
			ft_mainbody(x, y, z);
			ft_top_n_bottom_line(x);
			ft_putchar('\n');
		}
	}
}
