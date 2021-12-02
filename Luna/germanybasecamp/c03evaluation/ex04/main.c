/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:42:34 by amorvai           #+#    #+#             */
/*   Updated: 2021/12/02 14:06:58 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../../c03/ex04/ft_strstr.c"

int main()
{
	char string1[32] = "find the needle in the haystack";
	char string2[9] = "hay";
	char *p;

	p = strstr(string1, string2);
	printf("%c\n", *p);
	printf("%s\n", p);
	p = ft_strstr(string1, string2);
	printf("%c\n", *p);
	printf("%s\n", p);
}
