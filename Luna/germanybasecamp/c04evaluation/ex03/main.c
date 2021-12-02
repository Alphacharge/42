/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:09:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/02 10:17:37 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "../../c04/ex03/ft_atoi.c"

int	main()
{
	char array[22] = "     ---+--+1234ab567";
	char array2[100] = "     -++++-7829a0";
	int a;
	int b;

	a = ft_atoi(array);
	b = ft_atoi(array2);
	printf("expected return:	-1234\nactual return:		%i\n", a);
	printf("expected return:	7829\nactual return:		%i\n", b);
}
