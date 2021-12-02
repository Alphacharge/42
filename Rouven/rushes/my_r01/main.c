/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:51:35 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 17:49:03 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	**ft_create_grid(int size);
int **ft_fill_grid_boundary(int **grid, char c, int x, int y);
int	**ft_fill_from_input(int **grid, char *ptr, int start);

int main(int argc,char **argv)
{
	char	*ptr;
	int		**grid;
	int		c;
	int		d;
int i,j;
	argv = argv+1;
	ptr = *argv;
	printf("\n%s\n", ptr);
	c = 0;
	d = 0;
	argc=argc+1;
	grid = ft_create_grid(6);
	ft_fill_from_input(grid, ptr, 0);
	//Fill paras in numbers





    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%c ",grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}