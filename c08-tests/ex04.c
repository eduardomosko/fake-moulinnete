/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:28:33 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/12 13:35:49 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main()
{
	char	*strings[] = {"string1", "string2", "stringmuitomaior1", "fim", "", "loucura", "issae"};
	struct s_stock_str *tab = ft_strs_to_tab(7, strings);
	struct s_stock_str *it = tab;

	tab[1].copy[3] = 'o';
	tab[3].copy[0] = 'S';

	while (it->str != 0)
	{
		printf("%s\n", it->str);
		printf("%i\n", it->size);
		printf("%s\n", it->copy);
		++it;
	}
}
