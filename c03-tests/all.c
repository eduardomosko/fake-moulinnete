/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:11:51 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/08 16:20:58 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

size_t	strlcat(char *dst, const char *src, size_t size);

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	printf("-- Exercício 00: ");
	char str0[] = "string";
	char str1[] = "string1";
	char str2[] = "abcdef";
	char str3[] = "fedcba";
	char str4[] = {-123, -56, 6, 32, 64, 65, 66, 0};
	char str5[] = "abcdefghijadofhiasdfj";
	char str6[] = "abcdefghijadfedcba";

	int ret0 = strcmp(str0, str1);
	int ret1 = ft_strcmp(str0, str1);

	if (strcmp(str0, str1) != ft_strcmp(str0, str1))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str1, str2)) != (ret1 = ft_strcmp(str1, str2)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str2, str3)) != (ret1 = ft_strcmp(str2, str3)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str3, str4)) != (ret1 = ft_strcmp(str3, str4)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strcmp(str5, str6)) != (ret1 = ft_strcmp(str5, str6)))
		printf("KO, expected %i got %i\n", ret0, ret1);
	else
		printf("OK\n");

	printf("-- Exercício 01: ");
	int str0l = strlen(str0);
	int str1l = strlen(str1);

	if ((ret0 = strncmp(str0, str1, str0l) != (ret1 = ft_strncmp(str0, str1, str0l))))
		printf("KO, test00 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str2, str3, 0)) != (ret1 = ft_strncmp(str2, str3, 0)))
		printf("KO, test01 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str1, str2, str1l)) != (ret1 = ft_strncmp(str1, str2, str1l)))
		printf("KO, test02 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str2, str3, 2)) != (ret1 = ft_strncmp(str2, str3, 2)))
		printf("KO, test03 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str3, str4, 2)) != (ret1 = ft_strncmp(str3, str4, 2)))
		printf("KO, test04 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str3, str4, 100)) != (ret1 = ft_strncmp(str3, str4, 100)))
		printf("KO, test05 expected %i got %i\n", ret0, ret1);
	else if ((ret0 = strncmp(str0, str1, 100)) != (ret1 = ft_strncmp(str0, str1, 100)))
		printf("KO, test06 expected %i got %i\n", ret0, ret1);
	else
		printf("OK\n");

	printf("-- Exercício 02: ");
	char buffer0[100];
	char buffer1[100];

	int i = 0;
	while (i < 100)
	{
		buffer0[i] = 'a';
		buffer1[i] = 'a';
		++i;
	}


	strcpy(buffer0, str1);
	strcpy(buffer1, str1);

	if (strcat(buffer1, str0), buffer0 != ft_strcat(buffer0, str0))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else if (strcat(buffer1, "ba ba ta ta"), buffer0 != ft_strcat(buffer0,  "ba ba ta ta"))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else
		printf("OK\n");

	printf("-- Exercício 03: ");

	i = 0;
	while (i < 100)
	{
		buffer0[i] = 'a';
		buffer1[i] = 'a';
		++i;
	}

	strcpy(buffer0, str1);
	strcpy(buffer1, str1);

	if (strncat(buffer1, str3, 3), buffer0 != ft_strncat(buffer0, str3, 3))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else if (strncat(buffer1, str1, 100), buffer0 != ft_strncat(buffer0, str1, 100))
		printf("KO, test01 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test01 expected %s got %s\n", buffer1, buffer0);
	else
		printf("OK\n");


	printf("-- Exercício 04: ");
	char findin0[] = "asdfasdfstringasaa";
	char findin1[] = "string aaa aaa string";
	char findin2[] = "1349813-2139485-1234";

	if (strstr(findin0, "string") != ft_strstr(findin0, "string"))
		printf("KO test00\n");
	else if (strstr(findin1, "string") != ft_strstr(findin1, "string"))
		printf("KO test01\n");
	else if (strstr(findin2, "213") != ft_strstr(findin2, "213"))
		printf("KO test02\n");
	else if (strstr(findin0, "213") != ft_strstr(findin0, "213"))
		printf("KO test03\n");
	else if (strstr(findin2, "555555") != ft_strstr(findin2, "555555"))
		printf("KO test04\n");
	else if (strstr(findin2, "") != ft_strstr(findin2, ""))
		printf("KO test05\n");
	else if (strstr(findin0, "123") != ft_strstr(findin0, "123"))
		printf("KO test06\n");
	else if (strstr(findin0, "asdfasdfstringasa") != ft_strstr(findin0, "asdfasdfstringasa"))
		printf("KO test07\n");
	else
		printf("OK\n");

	printf("-- Exercício 05: ");
	i = 0;
	while (i < 100)
	{
		buffer0[i] = 0;
		buffer1[i] = 0;
		++i;
	}
	strcpy(buffer0, str1);
	strcpy(buffer1, str1);
	unsigned int ret0l;
	unsigned int ret1l;

	if ((ret1l = strlcat(buffer1, str0, 7)) != (ret0l = ft_strlcat(buffer0, str0, 7)))
		printf("KO, test00 wrong return expected %i got %i\n", ret1l, ret0l);
	else if (strncmp(buffer0, buffer1, 100) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);

	else if ((ret1l = strlcat(buffer1, str0, 20)) != (ret0l = ft_strlcat(buffer0, str0, 20)))
		printf("KO, test01 wrong return expected %i got %i\n", ret1l, ret0l);
	else if (strncmp(buffer0, buffer1, 100) != 0)
		printf("KO, test01 expected %s got %s\n", buffer1, buffer0);

	else if ((ret1l = strlcat(buffer1, str2, 1)) != (ret0l = ft_strlcat(buffer0, str2, 1)))
		printf("KO, test02 wrong return expected %i got %i\n", ret1l, ret0l);
	else if (strncmp(buffer0, buffer1, 100) != 0)
		printf("KO, test02 expected %s got %s\n", buffer1, buffer0);
	else
		printf("OK\n");

}

