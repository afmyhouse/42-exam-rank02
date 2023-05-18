/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:51:30 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/11 18:23:55 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure in your program ft_list_size.c :
*/

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while(begin_list)
	{
			begin_list = begin_list->next;
			i++;
	}
	return (i);
}

