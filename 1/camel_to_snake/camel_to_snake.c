/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:32:58 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 17:49:05 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/
#include <stdlib.h>
#include <unistd.h>

void	ft_camel_to_snake(char *camel);
int ft_camel_words_count(char *s);
int ft_strlen(char *s);

int main(int argc, char **argv)
{
	if (argc == 2)
	//	ft_camel_to_snake("hereIsACamelCaseWord");
		ft_camel_to_snake(argv[1]);
	write(1, "\n",1);
	return (0);
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
int ft_camel_words_count(char *s)
{
	int i;

	i = 0;
	while(*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			i++;
		s++;
	}
	return (i);
}
void	ft_camel_to_snake(char *camel)
{
	int 	i;
	char	*snake;

	i = 0;
	snake = (char *)malloc(sizeof(char) * (ft_strlen(camel) + ft_camel_words_count(camel)));
	if (snake)
	{
		while(*camel)
		{
			if (*camel >= 'A' && *camel <= 'Z')
			{
				snake[i++] = '_';
				snake[i++] = *camel++ + 32;
			}
			else
				snake[i++] = *camel++;
		}

		snake[i] = '\0';
		i = 0;
		while(snake[i])
			write(1, &snake[i++],1);
		free(snake);
	}
	return ;
}