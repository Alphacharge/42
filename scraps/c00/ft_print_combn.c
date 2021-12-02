/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:56:33 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/25 00:19:57 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int size_int)
{
	char	a;

	if (size_int > 9)
	{
		ft_putnbr(size_int / 10);
		ft_putnbr(size_int % 10);
	}
	else
	{
		a = size_int + 48;
		write(1, &a, 1);
	}
}

int	ft_calc_exp(int f)
{
	int i;

	i = 1;
	while(f > 0)
	{
		i = i * 10;
		f--;
	}
	return(i);
}

void	ft_print_combn(int n)
{
	int	size_int;
	char	a;
	int	reset_n;
	int	help;
	int	b;
	
	size_int = 1;
	a = '0';
	reset_n = n;
	help = 1;
	b = 1;
	if (n > 0)
	{
		if (n > 1)
		{
			//new while?
			while (a <= '9')
			{
				size_int = a - 47;
				help = size_int;
				while (n > 2)
				{
					n--;
					help++;
					size_int = size_int * 10;
					size_int = size_int + help;
				}
				n = reset_n;
				b = size_int;
				
				help = 123456789 % ft_calc_exp(n - 1);
				while  (size_int < help)
				{
					if  (size_int % 10 != 0)
					{
						ft_putchar(a);
						ft_putnbr(size_int);
						if (a < ':' - n)
						{
							write(1, ", ", 2);
						}
					}
					while (n > 2)
					{
						while ((size_int / ft_calc_exp(n - 2)) % 10 > (size_int / ft_calc_exp(n - 3)) % 10)
						{
							size_int = size_int + ft_calc_exp(n - 3);
						}
						n--;
					}
					n = reset_n;
					//ft_putchar(reset_n + 48);
					size_int++;
				}
				a++;
			}
		}
		else
		{
			while (a <= '9')
			{
				ft_putchar(a);
				if (a < '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
		}
	}
}

int main()
{
	ft_print_combn(5);
}