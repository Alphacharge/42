/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/24 21:42:56 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex03/ft_div_mod.c"

#include <stdio.h>

int	main()
{
	int a;
	int b;
	int c;
	int d;
	
	a = 49;
	b = 5;
	c = 0;
	d = 0;
	printf("%i %i \n", a, b);
	ft_div_mod(a, b, &c, &d);
	printf("%i %i \n", c, d);
}
