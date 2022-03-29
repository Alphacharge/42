/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:38:25 by rbetz             #+#    #+#             */
/*   Updated: 2022/03/29 17:40:44 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

#define RED "\033[1;31m"
#define GREEN "\033[01;32m"
#define NC "\033[0m"

int	main(void)
{
	char	w[8] = "Hallo5-";
	char	x[4] = "-5o";
	printf(GREEN"%s\n"NC, "ft_isalpha (1,0):");
	printf("%d\n",ft_isalpha(w[0]));
	printf("%d\n",ft_isalpha(w[5]));
	
	printf(GREEN"%s\n"NC, "ft_isdigit (0,1):");
	printf("%d\n",ft_isdigit(w[0]));
	printf("%d\n",ft_isdigit(w[5]));

	printf(GREEN"%s\n"NC, "ft_isalnum (1,1,0):");
	printf("%d\n",ft_isalnum(w[0]));
	printf("%d\n",ft_isalnum(w[5]));
	printf("%d\n",ft_isalnum(w[6]));
	
	printf(GREEN"%s\n"NC, "ft_isascii (1,1,1,1):");
	printf("%d\n",ft_isascii(w[0]));
	printf("%d\n",ft_isascii(w[5]));
	printf("%d\n",ft_isascii(w[6]));
	printf("%d\n",ft_isascii('`'));
	
	printf(GREEN"%s\n"NC, "ft_isprint (1,1,1,0):");
	printf("%d\n",ft_isprint(w[0]));
	printf("%d\n",ft_isprint(w[5]));
	printf("%d\n",ft_isprint(w[6]));
	printf("%d\n",ft_isprint('\t'));
	
	printf(GREEN"%s\n"NC, "ft_strlen (7):");
	printf("%d\n",ft_strlen(w));
	
	printf(GREEN"%s\n"NC, "ft_memset (__llo5-):");
	printf("%s\n", w);
	ft_memset(w, '_', 2);
	printf("%s\n", w);

	printf(GREEN"%s\n"NC, "ft_bzero (_ll):");
	printf("%s\n", w);
	ft_bzero(w, 1);
	printf("%c%c%c%c\n", w[0],w[1],w[2],w[3]);

	printf(GREEN"%s\n"NC, "ft_memcpy (-5olo5-):");
	printf("%c%c%c%c%c%c%c\n", w[0],w[1],w[2],w[3],w[4],w[5],w[6]);
	ft_memcpy(w, x, 3);
	printf("%s\n", w);
	printf(RED"%s\n"NC, "EDGECASE__ft_memcpy (-5-5-5-):");
	printf("%c%c%c%c%c%c%c\n", w[0],w[1],w[2],w[3],w[4],w[5],w[6]);
	ft_memcpy(&w[2], &w[0], 4);
	printf("%s\n", w);

	printf(GREEN"%s\n"NC, "ft_memmove (5-55-5-):");
	printf("%c%c%c%c%c%c%c\n", w[0],w[1],w[2],w[3],w[4],w[5],w[6]);
	ft_memmove(&w[0], &w[3], 3);
	printf("%s\n", w);
	printf(RED"%s\n"NC, "EDGECASE__ft_memmove (5--55--):");
	printf("%c%c%c%c%c%c%c\n", w[0],w[1],w[2],w[3],w[4],w[5],w[6]);
	ft_memmove(&w[2], &w[1], 4);
	printf("%s\n", w);

	char	y[8] = "Hallo5-";
	printf(GREEN"%s\n"NC, "ft_toupper (a,A):");
	printf("%c\n", y[1]);
	printf("%c\n", ft_toupper(y[1]));

	printf(GREEN"%s\n"NC, "ft_tolower (H,h):");
	printf("%c\n", y[0]);
	printf("%c\n", ft_tolower(y[0]));

	printf(GREEN"%s\n"NC, "ft_strchr (llo5-):");
	printf("%s\n", y);
	printf("%s\n", ft_strchr(y, 'l'));
	
	printf(GREEN"%s\n"NC, "ft_strrchr (lo5-):");
	printf("%s\n", y);
	printf("%s\n", ft_strrchr(y, 'l'));

	printf(GREEN"%s\n"NC, "ft_strncmp (-19):");
	printf("%s\n", y);
	printf("%d\n", ft_strncmp(w, y, 3));

	printf(GREEN"%s\n"NC, "ft_memchr (llo5-):");
	printf("%s\n", y);
	printf("%s\n", ft_memchr(y, 'l', 4));
	printf(RED"%s\n"NC, "EDGECASE__ft_memchr ():");
	printf("%s\n", y);
	printf("%s\n", ft_memchr(y, 'l', 1));

	printf(GREEN"%s\n"NC, "ft_memcmp (-19):");
	printf("%s\n", y);
	printf("%d\n", ft_memcmp(w, y, 3));

	printf(GREEN"%s\n"NC, "ft_strlcpy (-5,3):");
	printf("%c%c%c%c%c%c%c\n", y[0],y[1],y[2],y[3],y[4],y[5],y[6]);
	ft_strlcpy(y, x, 3);
	printf("%s\n", y);
	printf("%zu\n", strlcpy(y, x, 3));

	char	m[12] = "Hallo5-";
	printf(GREEN"%s\n"NC, "ft_strlcat (Hallo--5o, 13):");
	printf("%s,%s,%d\n", m,x,10);
	ft_strlcat(m, x, 12);
	printf("%s\n", m);
	printf("%lu\n", ft_strlcat(m, x, 10));
	return (0);
}
