/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:57:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 23:40:19 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

void			ft_strlcat_test(char *dest, char *ft_dest, char *src, unsigned int size)
{
	unsigned int	return_value;
	unsigned int	ft_return_value;

	return_value = strlcat(dest, src, size);
	ft_return_value = ft_strlcat(ft_dest, src, size);
	if (return_value != ft_return_value)
		printf("> KO, expected: %u, got: %u\n", return_value, ft_return_value);
	else if (strcmp(dest, ft_dest) != 0)
		printf("> KO, expected: %s, got: %s\n", dest, ft_dest);
	else
		printf("> OK, result: %s\n", ft_dest);
}

int				main(void)
{
	char			*src;
	char			*dest;
	char			*ft_dest;

	// invalid case, dest is non null terminated in the first size - 1 bytes.
	src = "stuv";
	dest = "abcdefghijklmnopr";
	ft_dest = "abcdefghijklmnopr";
	ft_strlcat_test(dest, ft_dest, src, 0);
	ft_strlcat_test(dest, ft_dest, src, 1);
	ft_strlcat_test(dest, ft_dest, src, 4);
	ft_strlcat_test(dest, ft_dest, src, 10);
	// valid case, dest is null terminated in the first size - 1 bytes, modified and terminated
	src = "ghijkl";
	dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_dest = strcpy(calloc(13, sizeof(char)), "abcdef");
	ft_strlcat_test(dest, ft_dest, src, 8);
	ft_strlcat_test(dest, ft_dest, src, 10);
	return (0);
}
