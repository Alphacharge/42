/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:45:36 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:26:55 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../../c02/ex09/ft_strcapitalize.c"

int	main()
{
	char sentence[62] = "hello,THIS is ANnA fRom 42Heilbronn.";
	//"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(sentence);
	printf("%s\n", sentence);
}