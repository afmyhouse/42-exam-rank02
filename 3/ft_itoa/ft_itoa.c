/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:57:00 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/14 22:59:28 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/
#include <stdlib.h>
//#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char *res;
	int	i = 1;
	unsigned int pnbr;
	int	nbr_copy = nbr;

	while (nbr_copy /= 10)
		i++;
	if(nbr < 0)
	{
		i += 2;
		res = (char *)malloc(sizeof(char) * i);
		res[0] = '-';
		pnbr = nbr * (-1);
	}
	else
	{
		i += 1;
		res = (char *)malloc(sizeof(char) * i);
		pnbr = nbr;
	}
	res[--i] = '\0';
	if (pnbr == 0)
		res[0] = '0';
	while (pnbr)
	{
		res[--i] = pnbr%10 + '0';
		pnbr/=10;
	}
	return (res);
}
/*
int main(int ac, char **av)
{
	char	*res;
	if (ac == 2)
		res = ft_itoa(atoi(av[1]));
		printf("%s\n", res);
	return (0);
}
*/