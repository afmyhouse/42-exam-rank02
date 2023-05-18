/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:58:32 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/18 23:18:34 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/
#include <unistd.h>
/*
void	print_bits(unsigned char octet)
{
	char bits;

	bits = 8;
	while (bits--)
	{
		if (128 & octet )
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet << 1;
	}
	return ;
}*/

void	print_bits(unsigned char octet)
{
	unsigned char bits;

	bits = 128;
	while (bits)
	{
		if (bits & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bits /= 2;
	}
	return ;
}
/*
int	main(void)
{
	unsigned char	octet;

	octet = 42;
	print_bits(octet);
	return (0);
}
*/
