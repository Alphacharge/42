/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/24 21:32:01 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex01/ft_ultimate_ft.c"

#include <unistd.h>

int	main()
{
	int a;
	int *b;
	int **c;
	int ***d;
	int ****e;
	int *****f;
	int ******g;
	int *******h;
	int ********i;
	int *********j;
	
	a = 0;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	ft_ultimate_ft(j);
	write(1, &a, 1);
}
