/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:48:02 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/01 13:54:07 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../../c03/ex02/ft_strcat.c"

int main()
{
	char s1[30] = "hello, ";
	char s2[12] = "how are yo0";
	char s3[30] = "hello, ";
	char s4[12] = "how are yo0";

	strcat(s1, s2);
	ft_strcat(s3, s4);
	printf("strcat return:		%s\nft_strcat return:	%s\n\n", s1, s3);
}
