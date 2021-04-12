/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 02:03:06 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 02:06:15 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ten_queens_puzzle(void);

int	main(void)
{
	int solutions;

	solutions = ft_ten_queens_puzzle();
	if (solutions == 724)
		printf("> OK, result: %d.\n", solutions);
	else
		printf("> KO, expected: 724, got: %d\n", solutions);
	return (0);
}
