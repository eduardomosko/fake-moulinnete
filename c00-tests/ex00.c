/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leoperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:41:57 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/18 17:33:22 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	main(void)
{
	int	c;

	printf("Expected:\n0123456789\nResult: \n");

	c = '0';
	while (c <= '9')
		ft_putchar(c++);
	ft_putchar('\n');

	return (0);
}
