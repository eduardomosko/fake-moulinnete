/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:21:16 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 01:33:18 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[10] = {9,0,7,4,5,3,1,2,8,6};
	int result[10] = {0,1,2,3,4,5,6,7,8,9};
	int error;

	printf("  Original: ");
	for(int i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	printf("\n");
	printf("  Expected: ");
	for(int i = 0; i < 10; i++)
		printf("%d ", result[i]);
	printf("\n");
	ft_sort_int_tab(tab, 10);

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
