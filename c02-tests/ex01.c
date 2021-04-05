/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:17:14 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 16:21:47 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int	n;
	char 			*src;
	char 			*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(11, sizeof(char));
	src = "0123456789";
	n = 8;
	printf("src: %s\n", src);
	ft_strncpy(dest, src, n);
	printf("dest up to %d: %s\n", n, dest); 
	return (0);
}
