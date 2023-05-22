/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:20:04 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/18 23:58:28 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/
#include	<stdlib.h>
//#include	<stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	*tmp;
	int	len;
	int	i, j;

	if (start > end)
	{
		len = start - end;
		j = 1;
	}
	else
	{
		len = end - start;
		j = -1;
	}
	i = end;
	res = (int *)malloc(sizeof(int) * len);
	tmp = res;
	if (tmp)
	{
		while (i != start)
		{
			*tmp = i;
			//printf("%i ", *tmp);
			tmp++;
			i += j;
		}
		*tmp = i;
		//printf("%i ", *tmp);
		return (res);
	}
	else
		return (0);

}
/*
int	main(int ac, char **av)
{
	int	*res;

	// ./ft_rrange "start" "end"
	if (ac == 3)
	{
		res = ft_rrange(atoi(av[1]), atoi(av[2]));
		printf("| %i ", *res);
	}
	else
	{
		res = ft_rrange(0, -3);
		printf("| %i ", *res);
	}
	printf("\n");
	return (0);
}
*/