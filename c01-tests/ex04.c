/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:00:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 20:53:55 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	if (a == 4 && b == 2)
		printf("OK: a: 42 => %d, b: 10 => %d\n", a, b);
	else
		printf("KO: a: 42 => %d, b: 10 => %d\n", a, b);

	a = 42;
	b = 0;
	ft_ultimate_div_mod(&a, &b);
	if (a == 42 && b == 0)
		printf("OK: a: 42 => %d, b: 0 => %d\n", a, b);
	else
		printf("KO: a: 42 => %d, b: 0 => %d\n", a, b);
	return (0);
}
