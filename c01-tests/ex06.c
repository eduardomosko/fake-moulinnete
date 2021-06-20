/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:34:18 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 00:37:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	int		size;

	char 	*str = "42 is amazing bro!";
	size = ft_strlen(str);
	if ((long unsigned int)size == strlen(str))
		printf("OK: str=\"%s\" | strlen=%d\n", str, size);
	else
		printf("KO: str=\"%s\" | strlen=%d\n", str, size);

	char 	*str2 = "!@#$'|/?¨&*()_+";
	size = ft_strlen(str2);
	if ((long unsigned int)size == strlen(str2))
		printf("OK: str2=\"%s\" | strlen=%d\n", str2, size);
	else
		printf("KO: str2=\"%s\" | strlen=%d\n", str2, size);
	return (0);
}
