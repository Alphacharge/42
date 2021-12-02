/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:16:46 by rbetz             #+#    #+#             */
/*   Updated: 2021/11/27 15:33:50 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_print_comb.c"

int main(int argc,char *argv[3])
{
 /*   int counter;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++)
       {
//	      	printf("\nargv[%d]: %s",counter,argv[counter]);
		}
    } */
	char numbers[16];
	char a[16];
	char *ptr;
	int c;
	int d;
	int f;
	int solved;
	c = 0;
	d = 6;
	solved = 0;
	ptr = *argv;
	char new;
	new = '\n';
	char l;
	l = '-';
	write(1, &new, 1);
	//Fill paras in numbers
	while (c < 16)
	{
		//printf("\nmy[%d]: %c",c,ptr[d]);
		numbers[c] = ptr[argc+d];
		//write(1, &numbers[c], 1);
		a[c] = '0';
		c++;
		d = d + 2;
	}
	c = 0;
/*	while (solved == 0)
	{
		// Check first row
		while (c < 4)
		{
			if (numbers[c] == '1')
			{
				a[c] = '4';
			}
			if (numbers[c] == '4')
			{
				a[c] = '1';
				a[c+4] = '2';
				a[c+4] = '3';
				a[c+4] = '4';
			}
			c++;
		}
		//check last row
		c = 4;
		while (c < 8)
		{
			if (numbers[c] == '1')
			{
				a[c+8] = '4';
			}
			if (numbers[c] == '4')
			{
				a[c+8] = '1';
				a[c+4] = '2';
				a[c] = '3';
				a[c-4] = '4';
			}
			c++;
		}
		//check left side 
		c = 8;
		f = 0;
		while (c < 12)
		{
			if (numbers[c] == '1')
			{
				a[f] = '4';
			}
			if (numbers[c] == '4')
			{
				a[f] = '1';
				a[f+1] = '2';
				a[f+2] = '3';
				a[f+3] = '4';
			}
			c++;
			f = f + 4;
		}
		//check right side 
		c = 12;
		f = 3;
		while (c < 16)
		{
			if (numbers[c] == '1')
			{
				a[f] = '4';
			}
			if (numbers[c] == '4')
			{
				a[f] = '1';
				a[f-1] = '2';
				a[f-2] = '3';
				a[f-3] = '4';
			}
			c++;
			f = f + 4;
		}
		
		solved = 1;
	}
	write(1, &l, 1);
	write(1, &numbers[0], 1);
	write(1, &numbers[1], 1);
	write(1, &numbers[2], 1);
	write(1, &numbers[3], 1);
	write(1, &l, 1);
	write(1, &new, 1);
	write(1, &numbers[8], 1);
	write(1, &a[0], 1);
	write(1, &a[1], 1);
	write(1, &a[2], 1);
	write(1, &a[3], 1);
	write(1, &numbers[12], 1);
	write(1, &new, 1);
	write(1, &numbers[9], 1);
	write(1, &a[4], 1);
	write(1, &a[5], 1);
	write(1, &a[6], 1);
	write(1, &a[7], 1);
	write(1, &numbers[13], 1);
	write(1, &new, 1);
	write(1, &numbers[10], 1);
	write(1, &a[8], 1);
	write(1, &a[9], 1);
	write(1, &a[10], 1);
	write(1, &a[11], 1);
	write(1, &numbers[14], 1);
	write(1, &new, 1);
	write(1, &numbers[11], 1);
	write(1, &a[12], 1);
	write(1, &a[13], 1);
	write(1, &a[14], 1);
	write(1, &a[15], 1);
	write(1, &numbers[15], 1);
	write(1, &new, 1);
	write(1, &l, 1);
	write(1, &numbers[4], 1);
	write(1, &numbers[5], 1);
	write(1, &numbers[6], 1);
	write(1, &numbers[7], 1);
	write(1, &l, 1);
    return 0;*/
//-----------------------------------------------------------------------------

	char combs[24];
	int count;
	int c;
	char temp;
	count = 0;
	c=0;
	ft_print_comb(combs);
	for (count=0;count<24;i++)
	{
		for(c=0;c<4;i++)
		{
			write(1, combs[count][c], 1):
		}
	}
	return (0);
}
