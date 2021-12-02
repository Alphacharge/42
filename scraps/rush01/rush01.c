/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:46:18 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/27 10:21:59 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void matrix()
{
	int matrix[7][7];
	matrix[0][0] = 0;
	matrix[0][5] = 0;
	matrix[5][0] = 0;
	matrix[5][5] = 0;
	int i;
	int j;
	int k;

	i = 1;
	j = 1;
	k = 1;
	while (0 < i && i < 5)
	{
		if (matrix[i][0] == 4)
		{
			while(j < 5)
			{
				matrix[i][j] =  j;
				j++;
			}
		}
		if (matrix[i][5] == 4)
		{
			while(j > 0)
			{
				matrix[i][j] =  k;
				j--;
				k++;
			}
		}
		i++;
	}

// wo "1" - 4en daneben ergänzen
	i = 1;
	while (0 < i && i < 5)
	{
		if (matrix[i][0] == 1)
		{
			matrix[i][1] = 4;
		}
		if (matrix[i][5] == 1)
		{
			matrix[i][4] = 4;
		}
		i++;
	}
	i = 1;
	while (0 < i && i < 5)
	{
		if (matrix[0][i] == 1)
		{
			matrix[1][i] = 4;
		}
		if (matrix[5][i] == 1)
		{
			matrix[4][i] = 4;
		}
		i++;
	}
	i = 1;
// wenn "1" und "2" sich gegenüberliegen - 3en neben der "2" ergänzen
	while (0 < i && i < 5)
	{
		if (matrix[i][0] == 2 && matrix[i][5] == 1)
		{
			matrix[i][1] = 3;
		}
		if (matrix[i][5] == 2 && matrix[i][0] == 1)
		{
			matrix[i][4] = 3;
		}
		i++;
	}
	i = 1;
	while (0 < i && i < 5)
	{
		if (matrix[0][i] == 2 && matrix[5][i] == 1)
		{
			matrix[1][i] = 3;
		}
		if (matrix[5][i] == 2 && matrix[0][i] == 1)
		{
			matrix[4][1] = 3;
		}
		i++;
	} 
}