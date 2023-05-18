/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 00:07:16 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 03:07:40 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the 
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and 
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)
  
  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);

*/
/*
#include <stdio.h>
#include <stdlib.h>

unsigned int    hcf(unsigned int a, unsigned int b);
unsigned int    lcm(unsigned int a, unsigned int b);
unsigned int    lcm_by_hcf(unsigned int a, unsigned int b);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("lcm = %u\n", lcm(atoi(argv[1]), atoi(argv[2])));
		printf("lcm by hcf = %u\n", lcm_by_hcf(atoi(argv[1]), atoi(argv[2])));
		printf("hcf = %u\n", hcf(atoi(argv[1]), atoi(argv[2])));
	}
	else
	{
		printf("lcm = %u\n", lcm(-1, 2932));
		printf("lcm by hcf = %u\n", lcm_by_hcf(-1, 2932));
		printf("hcf = %u\n", hcf(-1, 2932));		
	}

	return (0);
}

unsigned int    hcf(unsigned int a, unsigned int b)
{
	unsigned int	min;

	if (a == 0 || b == 0 )
		return (0);
	if (a <= b)
		min = a;
	else
		min = b;
	while (min)
	{
		if (a % min == 0 && b % min == 0)
			return (min);
		min--;
	}
	return (1);
}
*/
unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	max;

	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
		max = a;
	else
		max = b;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
			return (max);
		max++;
	}
	return (0);
}
/*
unsigned int    lcm_by_hcf(unsigned int a, unsigned int b)
{
	unsigned long int i;

	if (a == 0 || b == 0 || (a +1) == 0 || (b + 1) == 0)
		return (0);
	i = a * b / hcf(a, b);
	return (i);
}
*/