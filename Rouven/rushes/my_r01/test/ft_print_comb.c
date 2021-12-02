/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:50:06 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 15:34:25 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char arr[][], char a, char b, char c, char d)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 256)
	{
		if ((a != b && c != d) && b != c)
		{
			arr[j][0] =	a;
			arr[j][1] =	b;
			arr[j][2] =	c;
			arr[j][3] =	d;
			j++;
		}
	i++;
	}
	return (arr);
}

void	ft_print_comb(char arr[][])
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = '1';
	x = '2';
	y = '3';
	z = '4';
	while (w <= '4')
	{
		while (x <= '4')
		{
			while (y <= '4')
			{
				while (z <= '4')
				{
					ft_split(arr, w, x, y, z);
					z++;
				}
				y++;
				z = 1;
			}
			y = 1;
			x++;
		}
		w++;
		x = 1;
	}
}
