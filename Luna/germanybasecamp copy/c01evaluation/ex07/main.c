/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 15:34:02 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../c01/c01gitrepo/ex07/ft_rev_int_tab.c"

#include <stdio.h>

int	main()
{
	int a;

	a = 0;
	int array[19] = {81, 2, 3, 4, 5, 6, -7, 8, 9, 0, -1, 2, 3, 4, 5, 6, 7, 8, 91};
	printf("initial array:	");
	while (a < 19)
	{
		printf("%i ", array[a]);
		a++;
	}
	ft_rev_int_tab(array, 19);

	a = 0;
	printf("\nresult array:	");
	while (a < 19)
	{
		printf("%i ", array[a]);
		a++;
	}
	printf("\n");
}
