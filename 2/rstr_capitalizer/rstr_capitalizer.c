/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:14:01 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/08 23:59:46 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	to_upper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);

}

int	to_lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);

}

void	ft_rstr_cap(char *str)
{
	char	c;
	int		i;

	i = 0;
	//printf("ft_rstr_cap[i] = %s\n", str);

	//if (!str)
	//	return ;
	//else
	//{
		while (str[i])
		{
			//printf("str[%i] = %c | ", i, str[i]);
			if (!str[i + 1] || str[i + 1] == ' ' || str[i + 1] == '\t')
				c = to_upper(str[i]);
			else
				c = to_lower(str[i]);
			write(1, &c, 1);
			i++;
		}
	//}
}

int	main(int argc, char **argv)
{
	char	*str = "Sem Parmatros cOM teSTe asiim	DIFcil";
	char	*ptr;
	int		i = 0;
	int		j = 1;

	//printf("argc = %i\n", argc);

	if (argc == 1)
	{
		//printf("Entrou em argc = 1");
		//ft_rstr_cap(str);
		write(1, "\n", 1);
	}
	else
	{
		//printf("Entrou AQUI\n");
		while (j < argc)
		{
			//printf("j = %i\n", j);
			ptr = argv[j];
			//printf("argv[%i] = %s\n", j, argv[j]);
			ft_rstr_cap(argv[j]);
			//ptr = argv[j+1];
			//ft_rstr_cap(ptr);

			write(1, "\n", 1);
			j++;
		}
	}

			//write(1, "\n", 1);

	return (0);
}