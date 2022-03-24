/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:38:25 by rbetz             #+#    #+#             */
/*   Updated: 2022/03/24 13:48:09 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
void	*ft_memset(unsigned char *b, int c, int len);


int	main(void)
{
	char	w[7] = "Hallo5-";
	printf("%s\n", "ft_isalpha (1,0):");
	printf("%d\n",ft_isalpha(w[0]));
	printf("%d\n",ft_isalpha(w[5]));
	
	printf("%s\n", "ft_isdigit (0,1):");
	printf("%d\n",ft_isdigit(w[0]));
	printf("%d\n",ft_isdigit(w[5]));

	printf("%s\n", "ft_isalnum (1,1,0):");
	printf("%d\n",ft_isalnum(w[0]));
	printf("%d\n",ft_isalnum(w[5]));
	printf("%d\n",ft_isalnum(w[6]));
	
	printf("%s\n", "ft_isascii (1,1,1,1):");
	printf("%d\n",ft_isascii(w[0]));
	printf("%d\n",ft_isascii(w[5]));
	printf("%d\n",ft_isascii(w[6]));
	printf("%d\n",ft_isascii('`'));
	
	printf("%s\n", "ft_isprint (1,1,1,0):");
	printf("%d\n",ft_isprint(w[0]));
	printf("%d\n",ft_isprint(w[5]));
	printf("%d\n",ft_isprint(w[6]));
	printf("%d\n",ft_isprint('\t'));
	
	printf("%s\n", "ft_strlen (7):");
	printf("%d\n",ft_strlen(w));
	
	printf("%s\n", "ft_memset (__llo5-):");
	printf("%s\n", w);
	ft_memset(w, '_', 2);
	printf("%s\n", w);

	return (0);
}
