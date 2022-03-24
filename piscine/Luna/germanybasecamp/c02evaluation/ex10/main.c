/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:22:33 by coder             #+#    #+#             */
/*   Updated: 2021/11/30 12:26:25 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

#include "../../c02/ex10/ft_strlcpy.c"

int	main(void)
{
	char textA[10] = "123456";
	char textB[10];
	
	// kopiere in textB 3 Zeichen von textA
	ft_strlcpy(textB, textA, 3);

	
	printf("Text A: %s\nText B: %s\nCount: %d\n\n", textA, textB, ft_strlcpy(textB, textA, 3));
}