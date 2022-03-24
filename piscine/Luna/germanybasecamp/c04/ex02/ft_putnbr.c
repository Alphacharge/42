/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:56:57 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/01 00:59:12 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb < 0)
	{
		a = '-';
		write(1, &a, 1);
		if (nb != -2147483648)
			ft_putnbr(-nb);
		else
			write(1, "2147483648", 10);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		a = nb + 48;
		write(1, &a, 1);
	}
}
