/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:20:41 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:44:27 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c02/ex06/ft_str_is_printable.c"

int main()
{
	int rtrn;
	rtrn = 0;
	char test[26] = "ABCDEFGHIJKLMNOPQRSTV	WX0";

	rtrn = ft_str_is_printable(test);
	printf("%i", rtrn);
}
