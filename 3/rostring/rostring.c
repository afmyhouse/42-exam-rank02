/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 03:10:04 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 13:18:14 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *s);
void	rostring(char *s);
void	rotate_string_1word(char *s);

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
		rostring(argv[1]);
	return (0);
}

void	rotate_string_1word(char *s)
{
	int i;
	int j;
	i = 0;
	j = 0;	
	while (s[i] != ' ' && s[i] && s[i])
		i++;
	if (s[i])
	{
		i++;
		while (s[i])
			write(1, &s[i++], 1);	
		write(1, " ", 1);
	}
	i = 0;
	while (s[i] != ' ' && s[i])
		write(1, &s[i++] , 1);
	free(s);
	write(1, "\n", 1);
	return ;

}

void	rostring(char *s)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		while (s[i] != ' ' && s[i] != '\t' && s[i])
			tmp[j++] = s[i++];
		while (s[i] == ' ' || s[i] == '\t' && s[i])
			i++;
		if (s[i])
			tmp[j++] = ' ';
	}
	tmp[j] = '\0';
	rotate_string_1word(tmp);
	return ;
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}