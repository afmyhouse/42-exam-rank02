/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:09:20 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/14 23:20:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

//#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int	i = 0;
	int	max = tab[i];
	if(!len)
		return (0);
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
/*
int main()
{
	int tab[6] = {-1, 0, 4, 1000, -700, -45};
	printf("%i\n",max(tab, 0));
	return (0);
}*/
