/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_from_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:15:38 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 18:03:08 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int **ft_fill_grid_boundary(int **grid, char c, int x, int y);
int    **ft_fill_from_input(int **grid, char *ptr, int start)
{
    int    i;
    int    j;
    int    k;

    k = start;
    i = 0;
    while (i < 6)
    {
        j = 1;
        while (j < 5)
        {
            if (start == 0)
                ft_fill_grid_boundary(grid, ptr[k], i, j);
            else
                ft_fill_grid_boundary(grid, ptr[k], j, i);
            k += 2;
            j++;
        }
        i += 5;
    }
    i = 0;
    if (start == 0)
        ft_fill_from_input(grid, ptr, k);
    return (grid);
}
