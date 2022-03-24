/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/24 21:42:52 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex04/ft_ultimate_div_mod.c"

#include <stdio.h>

int	main()
{
	int a;
	int b;
	
	a = 21;
	b = 2;
	printf("%i %i \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i \n", a, b);
}
