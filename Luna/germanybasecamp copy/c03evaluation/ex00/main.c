/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:31:40 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/02 11:32:51 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../../c03/ex00/ft_strcmp.c"

int main()
{
	int rtrn;
	int rtrn2;
	char s1[20] = "hello, how are yo0";
	char s2[20] = "hello, how are you";
	
	rtrn = strcmp(s1, s2);
	rtrn2 = ft_strcmp(s1, s2);
	printf("strcmp return:		%i\nft_strcmp return:	%i\n", rtrn, rtrn2);
}
