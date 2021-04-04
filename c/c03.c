/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:11:51 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/04 13:10:27 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>



int main(void)
{
	printf("-- Exercício 00: ");
	char str0[] = "string";
	char str1[] = "string1";
	char str2[] = "abcdef";
	char str3[] = "fedcba";

	int ret0 = strcmp(str0, str1);
	int ret1 = ft_strcmp(str0, str1);

	if (strcmp(str0, str1) != ft_strcmp(str0, str1))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str1, str2)) != (ret1 = ft_strcmp(str1, str2)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str2, str3)) != (ret1 = ft_strcmp(str2, str3)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else
		printf("OK\n");

}

