/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:08:37 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 15:14:37 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int		ft_square(int n)
{
	return (n * n);
}

void	print_tab_nl(int *tab, int length)
{
	int i;

	i = 0;
	printf("{");
	while (i < length)
		printf("%i, ", tab[i++]);
	printf("\b\b} \n");

}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int *res = ft_map(tab, 5, ft_square);
	print_tab_nl(res, 5);
}
