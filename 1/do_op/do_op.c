/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:42:36 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/14 20:28:24 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : do_op
Expected files   : do_op.c
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(char **ops)
{
	int		op1 = atoi(ops[1]);
	int		op2	= atoi(ops[3]);
	char	op = ops[2][0];

	if (op == '*')
		return (op1 * op2);
	else if (op == '+')
		return (op1 + op2);
	else if (op == '-')
		return (op1 - op2);
	else if (op == '/')
		return (op1 / op2);
	else if (op == '%')
		return (op1 % op2);
	else
		return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%i",do_op(av));
	}
	//else
	printf("\n");
	return (0);
}