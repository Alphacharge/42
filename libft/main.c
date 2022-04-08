/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:38:25 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/08 17:01:20 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
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
	printf("%s\n", ft_memchr(y, 108+256, 4));
	printf(RED"%s\n"NC, "EDGECASE__ft_memchr ():");
	printf("%s\n", y);
	printf("%s\n", ft_memchr(y, 'l', 1));
	printf("%s\n", memchr(y, 'l'+256, 3));
	printf("%s\n", ft_memchr(y, 'l'+256, 3));

	printf(GREEN"%s\n"NC, "ft_memcmp (-19):");
	printf("%s\n", y);
	printf("%d\n", ft_memcmp(w, y, 3));

	printf(GREEN"%s\n"NC, "ft_strlcpy (-5,3):");
	printf("%c%c%c%c%c%c%c\n", y[0],y[1],y[2],y[3],y[4],y[5],y[6]);
	ft_strlcpy(y, x, 3);
	printf("%s\n", y);
//	printf("%zu\n", strlcpy(y, x, 3));

	char	m[15] = "Hallo5-";
	printf(GREEN"%s\n"NC, "ft_strlcat (Hallo--5o, 10):");
	printf("%s,%s,%d\n", m,m,12);
	//printf("%lu\n", strlcat(m, m, 12));
	printf("%lu\n", ft_strlcat(m, m, 12));
	printf("%s\n", m);

	char	g[15] = "Hallo5-";
	char	h[20] = "lo";
	char	i[20] = " 1548";
	char	j[20] = "	-1548";
	printf(GREEN"%s\n"NC, "ft_strnstr (lo5-):");
	printf("%s,%s,%d\n", g,h,12);
//	printf("%s\n", ft_strnstr(g, h, 12));
	printf(RED"%s\n"NC, "EDGECASE__ft_strnstr (0):");
	printf("%s,%s,%d\n", g,h,2);
//	printf("%s\n",ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
//	printf("%s\n", ft_strnstr(g, h, 2));

	printf(GREEN"%s\n"NC, "ft_atoi (0,1548):");
	printf("%s,%s\n", g,i);
	printf("Origi:%d\n\n", atoi(g));
	printf("Meins:%d\n\n", ft_atoi(g));
	printf("Origi:%d\n\n", atoi(h));
	printf("Meins:%d\n\n", ft_atoi(h));
	printf("Origi:%d\n\n", atoi(i));
	printf("Meins:%d\n\n", ft_atoi(i));
	printf("Origi:%d\n\n", atoi(j));
	printf("Meins:%d\n\n", ft_atoi(j));

	char	l[20] = "";
	printf(GREEN"%s\n"NC, "ft_strdup (lo5-):");
	printf("%s\n", g);
	printf("%s\n", ft_strdup(g));
	printf(RED"%s\n"NC, "EDGECASE__ft_strdup (0):");
	printf("%s\n", l);
	printf("%s\n", ft_strdup(l));

	printf(GREEN"%s\n"NC, "ft_substr (lo5):");
	printf("%s\n", g);
	printf("%s\n", ft_substr(g,3,3));
	printf(RED"%s\n"NC, "EDGECASE__ft_substr (5xxx):");
	printf("%s\n", g);
	printf("%s\n", ft_substr(g,7,4));

	printf(GREEN"%s\n"NC, "ft_strjoin (lo5-):");
	printf("%s,%s\n", g,i);
	printf("%s\n", ft_strjoin(g,i));
	printf(RED"%s\n"NC, "EDGECASE__ft_strjoin (0):");
	printf("%s,%s\n", g,i);
	printf("%s\n", ft_strjoin(l,l));
	
	printf(GREEN"%s\n"NC, "ft_strtrim (lo5-):");
	printf("%s,%s\n", g,h);
	printf("%s\n", ft_strtrim(g,h));

	printf(GREEN"%s\n"NC, "ft_itoa ():");
	printf("%ld\n", -2147483648);
	printf("%s\n", ft_itoa(-2147483648));
	printf("%d\n", 2147483647);
	printf("%s\n", ft_itoa(2147483647));
	printf("%d\n", 0);
	printf("%s\n", ft_itoa(0));
	printf("%d\n", 214748);
	printf("%s\n", ft_itoa(214748));

	char **d;
	int	e = 0;
	printf(GREEN"%s\n"NC, "ft_split ():");
	printf("Input:%s\n", "__fg_fr___yuh___");
	printf("Expected:%s,%s,%s\nGot:\n", "fg","fr","yuh");
	d = ft_split("__fg_fr___yuh___", '_');
	 while (e < 3)
	 {
		printf("STR = %s\n", d[e]);
		 e++;
	}
	printf(GREEN"%s\n"NC, "ft_putnbr_fd (123456):");
	ft_putnbr_fd(123456, 1);
	ft_putnbr_fd(-123456, 1);
	ft_putnbr_fd(0, 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	return (0);
}
