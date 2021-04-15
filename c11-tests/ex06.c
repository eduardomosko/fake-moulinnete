/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:54:30 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 18:58:39 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

void	print_tab_nl(char **tab)
{
	int i;

	i = 0;
	printf("{");
	while (tab[i] != NULL)
		printf("\"%s\", ", tab[i++]);
	printf("NULL} \n");

}

int	main(void)
{
	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
	printf("tab before: ");
	print_tab_nl(tab0);

	ft_sort_string_tab(tab0);

	printf("tab after:  ");
	print_tab_nl(tab0);
}
