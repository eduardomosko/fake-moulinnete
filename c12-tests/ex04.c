/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:47:50 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 04:31:02 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

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

	ft_list_push_back(&list0, "banana");
	ft_list_push_back(&list0, "maçã");
	ft_list_push_back(&list0, "abacaxi");
	printf("list: ");
	print_list(list0);
	ft_list_push_back(&list1, "brabo");
	printf("list: ");
	print_list(list1);
	ft_list_push_back(&list2, "brabo0");
	ft_list_push_back(&list2, "brabo1");
	printf("list: ");
	print_list(list2);
}
