/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:20:41 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/30 12:36:33 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../c02/ex02/ft_str_is_alpha.c"

int main()
{
	int rtrn;
	rtrn = 0;
	char test[60] = "";//"djeislfivnemspef0diskenl";

	rtrn = ft_str_is_alpha(test);
	printf("%i", rtrn);
}
