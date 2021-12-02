/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:54:03 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:45:26 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c02/ex07/ft_strupcase.c"

int main()
{
	char string[12] = "hall0-wElt\n";

	ft_strupcase(string);
	printf("%s", string);
}
