/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:00:23 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/19 00:30:52 by antoda-s         ###   ########.fr       */
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

void	fprime(int nbr)
{
	unsigned int i;

	if (nbr == 1)
		printf("1");
	else if (nbr > 1)
	{
		while (!(nbr % 2))
		{
			printf("2");
			nbr /= 2;
			if (nbr > 1)
				printf("*");
		}
		i = 3;
		while ((i * i) < nbr)
		{
			while (!(nbr % i))
			{
				printf("%i", i);
				nbr /= i;
				if (nbr > 1)
					printf("*");
			}
			i += 2;
		}
		printf("%i", nbr);
	}
	printf("\n");
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	else
		printf("\n");
		//fprime(42);
	return (0);
}