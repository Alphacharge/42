/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:51:24 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/02 14:46:33 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

#include "../../c03/ex05/ft_strlcat.c"

int main()
{
	unsigned int n;
	unsigned int len;
	char s1[30] = "hello,";
	char s2[12] = "how are you";
	char s3[30] = "hello,";
	char s4[12] = "how are you";
	n = 12;
	
	len = strlcat(s1, s2, n);
	printf("strlcat dest:		%s\nstrlcat return:		%d\nn-th byte: 		%d\n", s1, len, n);
	len = ft_strlcat(s3, s4, n);
	printf("ft_strlcat dest:	%s\nft_strlcat return:	%d\nn-th byte: 		%d\n", s3, len, n);
}
