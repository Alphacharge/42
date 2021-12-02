/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:03:02 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 18:03:04 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	**ft_create_grid(int size)
{
	int	i;
	int	**grid;

	i = 0;
	grid = (int **) malloc (sizeof (int *) * size);
	while (i < size)
	{
		grid[i] = (int *) malloc (sizeof (int) * size);
		i++;
	}
	return (grid);
}

