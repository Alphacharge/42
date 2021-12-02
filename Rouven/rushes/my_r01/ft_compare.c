/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:03:02 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 23:06:21 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    **ft_compare(int **grid, int **poss_arr, int xy, char align)
{
	int	i;
	int	j;
	int	match[4][6][6];
	
	i = 0;
	if (align == 'h')
	{
		while (i < 24)
		{
			if (poss_arr[i][0] == grid[xy][0] && poss_arr[i][5] == grid[xy][5]);
			{
				//match
			}
			i++;
		}
	}
	else
	{
		while (i < 24)
		{
			if (poss_arr[i][0] == grid[0][xy] && poss_arr[i][5] == grid[5][xy]);
			{
				//match
			}
			i++;
		}
	}
	return (match);
}
