/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:57:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 20:47:47 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	unsigned int	size;
	char			*src;
	char			*dest;
	char			*ft_src;
	char			*ft_dest;
	unsigned int	r_size;
	unsigned int	ft_r_size;
	dest = strcpy(calloc(11, sizeof(char)), "alo ");
	ft_dest = strcpy(calloc(11, sizeof(char)), "alo ");
	src = strcpy(calloc(7, sizeof(char)), "galera");
	ft_src = strcpy(calloc(7, sizeof(char)), "galera");
	size = 16;
	r_size = strlcat(dest, src, size);
	ft_r_size = ft_strlcat(ft_dest, ft_src, size);
	if (r_size != ft_r_size)
		printf("[1] KO, wrong return value. expected=%02d got=%02d\n", r_size, ft_r_size);
	else if (strcmp(dest, ft_dest) != 0)
		printf("[1] KO, concatenated string has wrong value. expected=%s , got=%s\n", dest, ft_dest);
	else
		printf("[1] OK. expected=%s , result=%s\n", dest, ft_dest);
	return (0);
}
