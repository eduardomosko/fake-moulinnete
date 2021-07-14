/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:29:40 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/02 13:37:29 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 24;
	printf("    Before: %d\n", nbr);
	ft_ft(&nbr);
	if (nbr == 42)
		printf("OK: After: %d\n", nbr);
	else
		printf("KO: After: %d\n", nbr);
	return (0);
}
