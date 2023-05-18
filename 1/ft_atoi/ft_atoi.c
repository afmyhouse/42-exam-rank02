/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:06:33 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 00:05:15 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

/*
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]));
		printf("%i\n", ft_atoi(argv[1]));
	}
	return (0);
}
*/

int	ft_atoi(const char *str)
{
	char	*ptr;
	int		nbr = 0;
	int		sign = 1;

	ptr = (char *)str;
	while (*ptr == ' ' || (*ptr >= '\t' && *ptr <= '\r'))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		sign = -1 * (*ptr == '-') + (*ptr == '+');
		ptr++;
	}
	while (*ptr)
	{
		if (!(*ptr >= '0' && *ptr <= '9'))
			return (nbr * sign);
		nbr = nbr * 10 + (*ptr -'0');
		ptr++;
	}
	return (nbr * sign);
}
