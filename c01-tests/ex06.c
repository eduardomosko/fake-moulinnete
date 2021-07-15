/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:34:18 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 00:37:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "42 is amazing bro";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}
