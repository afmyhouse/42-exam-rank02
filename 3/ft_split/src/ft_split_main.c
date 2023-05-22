/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:35:57 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/21 21:07:45 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/
#include <stdio.h>
#include <stdlib.h>


char	**ft_split(char *s);

int	main(int ac, char **av)
{
	char	**res = NULL;
	int		i;

	i = -1;
	if (ac == 2)
	{
		res = ft_split(av[1]);
		while (res[++i] != 0 )
			printf("res[%i] = %s\n", i, res[i]);
	}
	else
	{
		res = ft_split("NO-INPUT  lorem  ipsum dolor sit cinco");
		while (res[++i] != 0 )
			printf("%s\n", res[i]);
		//printf("\n");
	}
	printf("\n");
	return (0);
}