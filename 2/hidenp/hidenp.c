/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:06:58 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/10 21:35:54 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/
#include	<unistd.h>

int	hidenp(char * s1, char *s2)
{
	int	i=0, j=0;
	
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if (argc == 2)
	{
		write(1, "1", 1);
		write(1, "\n", 1);
		return (0);
	}
	else if (argc == 3)
	{
		if (hidenp(argv[1], argv[2]))
		{
			write(1, "1", 1);
			write(1, "\n", 1);
			return (0);
		}
		else
		{
			write(1, "0", 1);
			write(1, "\n", 1);
			return (0);
		}
	}
	return (0);
}