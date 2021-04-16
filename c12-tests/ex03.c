/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:47:50 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 04:13:58 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

t_list		*ft_create_elem(void *data)
{
	t_list *ret;

	ret = malloc(sizeof(t_list));
	if (ret != NULL)
	{
		ret->data = data;
		ret->next = NULL;
	}
	return (ret);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (begin_list == 0)
		return ;
	temp = ft_create_elem(data);
	if (temp == 0)
		return ;
	temp->next = *begin_list;
	*begin_list = temp;
}


void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("\"%s\" -> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int		main(void)
{
	t_list *list0 = NULL;
	t_list *list1 = NULL;
	t_list *list2 = NULL;

	ft_list_push_front(&list0, "banana");
	ft_list_push_front(&list0, "maçã");
	ft_list_push_front(&list0, "abacaxi");
	printf("last \"%s\", list: ", ft_list_last(list0)->data);
	print_list(list0);
	ft_list_push_front(&list1, "brabo");
	printf("last \"%s\", list: ", ft_list_last(list1)->data);
	print_list(list1);
	ft_list_push_front(&list2, "brabo0");
	ft_list_push_front(&list2, "brabo1");
	printf("last \"%s\", list: ", ft_list_last(list2)->data);
	print_list(list2);
}
