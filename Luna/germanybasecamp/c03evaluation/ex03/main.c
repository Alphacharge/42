/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:51:44 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/01 16:43:29 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../../c03/ex03/ft_strncat.c"

int main()
{
	unsigned int n;
	char s1[30] = "hello,";
	char s2[12] = "how are yo0";
	char s3[30] = "hello,";
	char s4[12] = "how are yo0";
	n = 11;
	
	strncat(s1, s2, n);
	ft_strncat(s3, s4, n);
	printf("strncat return:		%s\nft_strncat return:	%s\nn-th byte: 		%d\n", s1, s3, n);
}
