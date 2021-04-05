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
	int *nbr;
	int	n;

	nbr = &n;
	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}
