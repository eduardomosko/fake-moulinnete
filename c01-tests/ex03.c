/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:47:03 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/02 13:58:07 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(42, 10, &div, &mod);
	if (div == 4 && mod == 2)
		printf("OK: a: 42, b: 10, div: %d, mod: %d\n", div, mod);
	else
		printf("KO: a: 42, b: 10, div: %d, mod: %d\n", div, mod);

	div = 0;
	mod = 0;
	ft_div_mod(42, 0, &div, &mod);
	if (div == 0 && mod == 0)
		printf("OK: a: 42, b: 0, div: %d, mod: %d\n", div, mod);
	else
		printf("KO: a: 42, b: 0, div: %d, mod: %d\n", div, mod);
	return (0);
}
