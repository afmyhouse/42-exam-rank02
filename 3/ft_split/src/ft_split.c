/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:35:57 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/21 19:21:26 by antoda-s         ###   ########.fr       */
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
#include <stdlib.h>

char	*ft_splitter(char *s)
{
	int		i;
	char	*split;

	i = 0;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	split = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		split[i] = s[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}

unsigned int	ft_count_splits(char *s)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			i++;
		count++;
		while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
	}
	return (count);
}

char	**ft_split(char *s)
{
	char	**array;
	int		j;
	int		count_splits;

	j = 0;
	count_splits = ft_count_splits(s);
	array = (char **)malloc(sizeof(char *) * (count_splits + 1));
	array[count_splits] = NULL;

	while (*s != '\0')
	{
		while (*s != '\0' && (*s == ' ' || *s == '\t' || *s == '\n'))
			s++;
		if (*s != '\0')
			array[j++] = ft_splitter(s);
		while (*s != '\0' && *s != ' ' && *s != '\t' && *s != '\n')
			s++;
	}
	return (array);
}
