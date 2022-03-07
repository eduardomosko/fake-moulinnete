/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:11:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 23:04:28 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	char *s6;
	char *s7;

	s1 = calloc(10, sizeof(char));
	s2 = calloc(8, sizeof(char));
	s3 = calloc(10, sizeof(char));
	s4 = calloc(10, sizeof(char));
	s6 = calloc(10, sizeof(char));
	s7 = calloc(1, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	s6 = "abcdefghi"; // s6 is the same of s1
	s7 = "";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s, s6: %s, s7: %s\n", s1, s2, s3, s4, s5, s6, s7);
	printf("ft_strcmp(s1, s2)\t= %d\noriginal strcmp(s1, s2)\t= %d\n------------------------------\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("ft_strcmp(s1, s3)\t= %d\noriginal strcmp(s1, s3)\t= %d\n------------------------------\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("ft_strcmp(s1, s4)\t= %d\noriginal strcmp(s1, s4)\t= %d\n------------------------------\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("ft_strcmp(s1, s5)\t= %d\noriginal strcmp(s1, s5)\t= %d\n------------------------------\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	printf("ft_strcmp(s1, s6)\t= %d\noriginal strcmp(s1, s6)\t= %d\n------------------------------\n", ft_strcmp(s1, s6), strcmp(s1, s6));
	printf("ft_strcmp(s1, s7)\t= %d\noriginal strcmp(s1, s7)\t= %d\n------------------------------\n", ft_strcmp(s1, s7), strcmp(s1, s7));
	return(0);
}
