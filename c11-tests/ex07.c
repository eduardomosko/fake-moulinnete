/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:16:40 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 19:19:42 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*));

void	print_tab_nl(char **tab)
{
	int i;

	i = 0;
	printf("{");
	while (tab[i] != NULL)
		printf("\"%s\", ", tab[i++]);
	printf("NULL} \n");

}

int	ft_strcmp(char *s1, char*s2)
{
	return (strcmp(s1, s2));
}

int	rev_strcmp(char *s1, char*s2)
{
	return (-1 * strcmp(s1, s2));
}

int	main(void)
{
	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
	printf("tab before:     ");
	print_tab_nl(tab0);

	ft_advanced_sort_string_tab(tab0, ft_strcmp);

	printf("tab strcmp:     ");
	print_tab_nl(tab0);

	ft_advanced_sort_string_tab(tab0, rev_strcmp);

	printf("tab rev_strcmp: ");
	print_tab_nl(tab0);
}
