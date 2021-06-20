/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:39:23 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/02 13:45:23 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;
	printf("    Before: %p: %d | %p: %d\n", &a, a, &b, b);
	ft_swap(&a, &b);
	if (a == 24 && b == 42)
		printf("OK: After: %p: %d | %p: %d\n", &a, a, &b, b);
	else
		printf("KO: After: %p: %d | %p: %d\n", &a, a, &b, b);
	return (0);
}
