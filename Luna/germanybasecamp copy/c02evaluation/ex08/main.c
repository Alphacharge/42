/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:54:03 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:46:59 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c02/ex08/ft_strlowcase.c"

int main()
{
	char string[21] = "HAHA, 1T B3 W0RKINg\n";

	ft_strlowcase(string);
	printf("%s", string);
}
