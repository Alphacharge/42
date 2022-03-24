/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:37:46 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/20 13:15:23 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_check_input(int x)
{
	int	max;

	max = 2147483647;
	if (x < 0)
	{
		x = x *(-1);
	}
	if (x > max)
	{
		x = max;
	}
	return (x);
}

//if left top corn OR right bott corner OR right top corn OR left bottom corner
//if first line 	OR	last line
//if first coloumn	OR	last cloumn

void	ft_logic(int a, int b, int x, int y)
{
	if (((a == 1) && (b == 1)) || ((a == x) && (b == y) && (b > 1) && (a > 1))
		|| ((a == x) && (b == 1)) || ((a == 1) && (b == y)))
	{
		ft_putchar('o');
	}
	else if ((a > 1) && ((b == 1) || (b == y)) && (a < x))
	{
		ft_putchar('-');
	}
	else if ((b > 1) && ((a == 1) || (a == x)) && (b <= y))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

// check input for negativ numbers and int 32bit overflow
void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	x = ft_check_input(x);
	y = ft_check_input(y);
	while (b <= y && x > 0 && y > 0)
	{
		while (a <= x)
		{
			ft_logic(a, b, x, y);
			a++;
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}
}
