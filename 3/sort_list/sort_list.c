/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:38:13 by antoda-s          #+#    #+#             */
/*   Updated: 2023/05/10 00:28:12 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"list.h"
#include	<stdio.h>
#include	<stdlib.h>


int	check_if_sorted(t_list *lst, int (*cmp)(int, int))
{
	while (lst->next)
	{
		if (!(*cmp)(lst->data, lst->next->data))
			return (0);
		lst = lst->next;
	}
	return (1);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*ptr;
	int		tmp;
	// initialize
	ptr = lst;
	tmp = 0;

	//run all the list thru
	while (!check_if_sorted(lst, cmp))
	{
		ptr = lst;
		while (ptr->next)
		{
			if ((*cmp)(ptr->data, ptr->next->data))
				ptr = ptr->next;
			else
			{
				tmp = ptr->data;
				ptr->data = ptr->next->data;
				ptr = ptr->next;
				ptr->data = tmp;
			}
		}
	}
	return (lst);

}

int	ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->data = 20;
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->data = 10;
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->data = 0;
	lst->next->next->next = NULL;

	lst = sort_list(lst, ascending);

	while (lst != NULL)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}

	return (0);
}
