/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:47:59 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/08 21:49:53 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char *str = "Ceci permet de decouvrir le fonctionnement de ton ft_strlen.";

	if (argc > 1)
		printf("strlen = %i\n", ft_strlen(argv[1]));
	else
		printf("strlen = %i\n", ft_strlen(str));
	return (0);
}
