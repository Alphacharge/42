/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:20:41 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:33:41 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c02/ex01/ft_strncpy.c"

int main()
{
	char destination[26] = "djeislfivnemspeofjdiskenl";
	char source[11] = "abcde\0ghij";

	ft_strncpy(destination, source, 6);
	printf("%s", destination);
}
