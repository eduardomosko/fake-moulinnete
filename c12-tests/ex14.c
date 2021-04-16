/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:47:50 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 09:04:25 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)());

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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *ret;
	int i;

	i = 0;
	ret = 0;
	while (i < size)
	{
		ft_list_push_front(&ret, strs[i]);
		++i;
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
	char *test0[] = {"blablabla", "aaarbore", "banana", "aarvore", "abacaxi"};
	char *test2[] = {"camila", "mauricio", "eduardo", "wagnera", "lari", "gade-lim"};

	t_list *list0 = ft_list_push_strs(5, test0);
	t_list *list2 = ft_list_push_strs(6, test2);

	printf("before: ");
	print_list(list0);
	ft_list_sort(&list0, (int(*)())strcmp);
	printf("after:  ");
	print_list(list0);

	printf("\nbefore: ");
	print_list(list2);
	ft_list_sort(&list2, (int(*)())strcmp);
	printf("after:  ");
	print_list(list2);
}
