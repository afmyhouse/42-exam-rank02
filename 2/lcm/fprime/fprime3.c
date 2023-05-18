/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:54 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/12 00:34:02 by antoda-s         ###   ########.fr       */
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
	unsigned int k = 0;	
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (nb > 1)
		{
			k++;
			//first_prime_factor
			while (nb % 2 == 0)
			{
				k++;
				printf("2");
				nb /= 2;
				if (nb > 1)
					printf("*");
			}
			//next_prime_factor
			i = 3;
			while ((i * i) <= nb)
			{
				k++;
				while (nb % i == 0)
				{
					k++;
					printf("%u", i);
					nb /= i;
					if (nb > 1)
						printf("*");
				}
				i += 2;
			}
			if (nb > 2)
			{
				printf("%u", nb);
				nb /= nb;
				break ;
			}
		}
	}
	printf("\n");
	printf("k = %u\n", k);
	return (0);
}