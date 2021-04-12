/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:42:32 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/12 13:45:17 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

char				*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	n;

	n = 0;
	while (src[n] != '\0')
		++n;
	dest = malloc(n + 1);
	if (dest != NULL)
	{
		dest[n] = '\0';
		while (n--)
			dest[n] = src[n];
	}
	return (dest);
}

unsigned int		ft_strlen(char *str)
{
	unsigned int n;

	n = 0;
	while (*str)
		++str && ++n;
	return (n);
}

void				init_stock_str(struct s_stock_str *s, char *str)
{
	if (str == NULL)
	{
		s->size = 0;
		s->str = NULL;
		s->copy = NULL;
	}
	else
	{
		s->str = str;
		s->size = ft_strlen(str);
		s->copy = ft_strdup(str);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *ret;

	ret = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (ret == NULL)
		return (NULL);
	init_stock_str(&ret[ac], NULL);
	while (--ac >= 0)
		init_stock_str(&ret[ac], av[ac]);
	return (ret);
}

int		main()
{
	char	*strings[] = {"string1", "string2", "stringmuitomaior1", "fim", "", "loucura", "issae"};
	struct s_stock_str *tab = ft_strs_to_tab(7, strings);

	ft_show_tab(tab);
}

