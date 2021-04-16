/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:47:50 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 05:37:47 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

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
	char *test0[] = {"blablabla", "abacaxi", "banana", "árvore", "abacaxi"};
	char *test1[] = {"vaca", "cavalo", "galinha", "cavalo", "porco", "ovelha"};

	t_list *list0 = ft_list_push_strs(5, test0);
	t_list *list1 = ft_list_push_strs(6, test1);;

	printf("list: ");
	print_list(list0);
	printf("=> looking for \"abacaxi\", found %p\n", ft_list_find(list0, "abacaxi", (int(*)())strcmp));
	printf("=> looking for \"a\", found %p\n", ft_list_find(list0, "a", (int(*)())strcmp));


	printf("\nlist: ");
	print_list(list1);
	printf("=> looking for \"cavalo\", found %p\n", ft_list_find(list1, "cavalo", (int(*)())strcmp));
	printf("=> looking for \"c\", found %p\n", ft_list_find(list1, "c", (int(*)())strcmp));
}
