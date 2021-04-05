/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:08:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 01:16:00 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}
