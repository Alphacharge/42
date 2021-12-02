/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:20:41 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:42:57 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../../c02/ex05/ft_str_is_uppercase.c"

int main()
{
	int rtrn;
	rtrn = 0;
	char test[26] = "ABCDEFGHIJKLMNOPQRSTUVWX0";

	rtrn = ft_str_is_uppercase(test);
	printf("%i", rtrn);
}
