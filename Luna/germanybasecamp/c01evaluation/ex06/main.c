/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/25 15:49:44 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex06/ft_strlen.c"

#include <stdio.h>

int	main()
{
	int b;

	b = ft_strlen("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	printf("%i", b);
}
