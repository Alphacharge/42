/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:27:09 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/20 21:54:52 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_topline(int x)
{
	ft_putchar('/');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('\\');
	}
}

void	ft_mainbody(int x, int y, int z)
{
	while (y > 2)
	{
		ft_putchar('*');
		if (x > 1)
		{
			while (x > 2)
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('*');
			x = z;
		}
		y--;
		ft_putchar('\n');
	}
}

void	ft_bottomline(int x)
{
	ft_putchar('\\');
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{	
	int	z;

	z = x;
	if (x > 0 && y > 0)
	{
		ft_topline(x);
		ft_putchar('\n');
		x = z;
		if (y > 1)
		{
			ft_mainbody(x, y, z);
			ft_bottomline(x);
			ft_putchar('\n');
		}
	}
}
