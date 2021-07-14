/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:43:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 11:59:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int result[10] = {9,8,7,6,5,4,3,2,1,0};
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int error;

	printf("  Original: 0 1 2 3 4 5 6 7 8 9\n");
	printf("  Expected: 9 8 7 6 5 4 3 2 1 0\n");
	ft_rev_int_tab(tab, 10);

	error = 0;
	for(int i = 0; i < 10; i++)
		if (result[i] != tab[i])
			error = 1;
	if (error)
		printf("KO: ");
	else
		printf("OK: ");

	printf("Result: ");
	for(int i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return (0);
}
