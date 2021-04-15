/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:28:41 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 18:49:01 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	bigger_than(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int main(void)
{
	int tab0[] = {1, 2, 3, 4, 5};
	int tab1[] = {1, 7, 3, 4, 5};

	printf("%i\n", ft_is_sort(tab0, 5, bigger_than));
	printf("%i\n", ft_is_sort(tab1, 5, bigger_than));
}
