/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:58:30 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/01 01:09:34 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c04/ex02/ft_putnbr.c"

int main()
{
	printf("EXERCISE 07__\n");
    printf("Zahl ist 0. Ausgabe: \n");
    ft_putnbr(0);
    printf("\n Zahl ist 456123. Ausgabe: \n");
    ft_putnbr(456123);
    printf("\n Zahl ist -147852. Ausgabe: \n");
    ft_putnbr(-147852);
    printf("\n Zahl ist -2147483648. Ausgabe: \n");
    ft_putnbr(-2147483648);
    printf("\n Zahl ist 2147483647. Ausgabe: \n");
    ft_putnbr(2147483647);
    printf("\n-------------------------------------------------------------\n");
}