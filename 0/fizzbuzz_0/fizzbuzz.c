/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:30:14 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/18 22:56:50 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/
#include <unistd.h>

void	printn(int i)
{
	char	u;
	char	d;
	char	c;

	u = (char)((i % 10) + '0');
	i /= 10;
	d = (char)((i % 10) + '0');
	i /= 10;
	c = (char)((i % 10) + '0');
	if (c != '0')
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
	}
	else if (d != '0')
	{
		write(1, &d, 1);
		write(1, &u, 1);
	}
	else
		write(1, &u, 1);
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i++ < 100)
	{
		if (!(i % 3) && !(i % 5))
			write(1, &"fizzbuzz", 8);
		else if (!(i % 3))
			write(1, &"fizz", 4);
		else if (!(i % 5))
			write(1, &"buzz", 4);
		else
			printn(i);
		write(1, "\n", 1);
	}
}

