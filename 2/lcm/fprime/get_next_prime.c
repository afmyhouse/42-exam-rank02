/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_prime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:01:58 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 23:24:49 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : get_next_prime
Expected files   : get_next_prime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays the next lowest prime number, followed by a newline.

Next prime is at least 1 unit bigger than the input positive number.


Examples:

$> ./get_next_prime 2 | cat -e
3$
$> ./get_next_prime 21 | cat -e
23$
*/
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	unsigned int	nb;
	unsigned int	j;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		j = 2;
		while (j <= nb)
		{
			if (nb % j == 0)
			{
				if (nb == j)
					break ;
				nb++;
				j = 2;
			}
			else
				j++;
		}
		printf("%d", nb);
	}
	printf("\n");
	return (0);
}	