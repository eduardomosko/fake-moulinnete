/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:16:15 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 15:24:02 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int		is_lower(char *str)
{
	while (*str != '\0')
	{
		if ('a' < *str || *str > 'z')
			return (1);
		++str;
	}
	return (0);
}

int		main(void)
{
	char *tab0[] = {"213413", "ADFASDF", "__++_\\4132%", 0};
	char *tab1[] = {"213413", "abs", "__++_\\4132%", 0};
	printf("tab0: %i\n", ft_any(tab0, is_lower));
	printf("tab1: %i\n", ft_any(tab1, is_lower));
}
