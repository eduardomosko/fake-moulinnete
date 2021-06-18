/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leoperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 19:31:50 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/18 17:54:07 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	write(1, "-2: ", 4);
	ft_is_negative(-2);
	write(1, "\n-1: ", 5);
	ft_is_negative(-1);
	write(1, "\n 0: ", 5);
	ft_is_negative(0);
	write(1, "\n 1: ", 5);
	ft_is_negative(1);
	write(1, "\n 2: ", 5);
	ft_is_negative(2);
	write(1, "\n", 1);
	return (0);
}
