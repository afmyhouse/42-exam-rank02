/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:54 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 23:35:23 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/
#include <stdio.h>
#include <stdlib.h>

//unsigned int	next_prime(unsigned int p);
//int				is_prime(unsigned int p);

int	main(int ac, char **av)
{
	unsigned int	nb;
	unsigned int	i;
	unsigned int	j;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		i = 2;
		while (nb > 1)
		{
			while (nb % i == 0)
			{
				printf("%u", i);
				nb /= i;
				if (nb > 1)
					printf("*");
			}
			//next_prime;
			i++;
			j = 2;
			while (j <= i)
			{
				if (i % j == 0)
				{
					if (i == j)
						break ;
					i++;
					j = 2;
				}
				else
					j++;
			}
		}
	}
	printf("\n");
	return (0);
}

unsigned int	next_prime(unsigned int p)
{
	unsigned int	nb;

	nb = p + 1;
	while (nb < 4294967295)
	{
		if (is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}

int	is_prime(unsigned int p)
{
	unsigned int i = 2;

	while (i < p)
	{
		if (p % i == 0)
			return (0);
		i++;
	}
	return (1);
}
