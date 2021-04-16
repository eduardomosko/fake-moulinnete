/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:27:23 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/06 13:39:45 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_strlen_test(char *str)
{
	int size;
	int ft_size;

	size = strlen(str);
	ft_size = ft_strlen(str);
	if (size != ft_size)
		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, ft_size);
	else
		printf("> OK. result: %d\n", ft_size);
}

int	main(void)
{
	char *str;

	str = "";
	ft_strlen_test(str);
	str = "Test";
	ft_strlen_test(str);
	str = "Testing mored and more and more and more and more and more.";
	ft_strlen_test(str);
	return (0);
}
