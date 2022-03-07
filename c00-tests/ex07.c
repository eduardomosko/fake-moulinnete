/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leoperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:49:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/18 18:07:05 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "   Expected: Result\n", 20);
	write(1, "         -1: ", 14);
	ft_putnbr(-1);
	write(1, "\n          1:  ", 15);
	ft_putnbr(1);
	write(1, "\n        -10: ", 14);
	ft_putnbr(-10);
	write(1, "\n         10:  ", 15);
	ft_putnbr(10);
	write(1, "\n 2147483647:  ", 15);
	ft_putnbr(2147483647);
	write(1, "\n-2147483648: ", 14);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}
