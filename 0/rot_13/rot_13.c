/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:36:34 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 16:24:25 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

void rot_13(char *s);

int main(int argc, char **argv)
{
	char *s ="My horse is Amazing.";

	if (argc == 2)
	/*{
		rot_13(s);
		rot_13("AkjhZ zLKIJz , 23y ");
	}
	else*/
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void rot_13(char *s)
{
	int i;
	char c;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c = s[i];
			c = c - 'a' ;
			c += 13;
			c %= 26;
			c += 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c = s[i];
			c = c - 'A';
			c += 13;
			c %= 26;
			c += 'A';
		}
		else
			c = s[i];
		write(1, &c, 1);
		i++;
	}
	return ;
}
