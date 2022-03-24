/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:35:36 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/01 13:49:32 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../../c03/ex01/ft_strncmp.c"

int main()
{
	int rtrn;
	int rtrn2;
	unsigned int n;
	char s1[20] = "hello, hOw ArE yO0";
	char s2[20] = "hello, hOw ArE yOu";
	n = 18;
	
	rtrn = strncmp(s1, s2, n);
	rtrn2 = ft_strncmp(s1, s2, n);
	printf("strcmp return:		%i\nft_strcmp return:	%i\nn-th byte: 		%d\n", rtrn, rtrn2, n);
}