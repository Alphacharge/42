/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:41:57 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/25 13:53:57 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_test_if_printable()
{
	char c;

	c = 0;
	while (c < 33)
	{
		printf("\"%c\"-", c);
		c++;
	}
	c = 127;
	printf("\"%c\"\n", c);
}

int main()
{
	ft_test_if_printable();
}