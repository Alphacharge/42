/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:20:41 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:40:58 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../../c02/ex04/ft_str_is_lowercase.c"

int main()
{
	int rtrn;
	rtrn = 0;
	char test[26] = "abcdefghijklmnp\0qrstuvwx0";

	rtrn = ft_str_is_lowercase(test);
	printf("%i", rtrn);
}
