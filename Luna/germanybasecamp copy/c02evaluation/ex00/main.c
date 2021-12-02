/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:48:58 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:31:28 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../../c02/ex00/ft_strcpy.c"

int main()
{
	char destination[26] = "djeislfivnemspeofjdiskenl";
	char source[11] = "hallo welt";

	ft_strcpy(destination, source);
	printf("%s", destination);
}
