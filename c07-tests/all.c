/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:51:32 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/08 05:05:26 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <malloc.h>

int		validate_range(int *buf, int min, int max)
{
	int i;

	i = 0;
	while (min < max)
		if (buf[i++] != min++)
			return (0);
	return (1);
}

#if defined(ALL) || defined(EX00)
char	*ft_strdup(char *src);

void	exercicio00()
{
	printf("\e[1;31m-- Exercício 00: \e[0m");
	char str0[] = "minha string de teste";
	char str1[] = "OutraSuperDste";
	char str2[] = "ainda mais um teste";
	char str3[] = "";

	char *test0;
	char *test1;
	char *test2;
	char *test3;

	test0 = ft_strdup(str0);
	test1 = ft_strdup(str1);
	test2 = ft_strdup(str2);
	test3 = ft_strdup(str3);

	if (strcmp(test0, str0) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test0, str0);
	else if (strcmp(test1, str1) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test1, str1);
	else if (strcmp(test2, str2) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test2, str2);
	else if (strcmp(test3, str3) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test3, str3);
	else
		printf("OK\n");

	free(test0);
	free(test1);
	free(test2);
	free(test3);
}
#endif

#if defined(ALL) || defined(EX01)
int		*ft_range(int min, int max);

void	exercicio01()
{
	int *buf0;
	int *buf1;
	int *buf2;
	int *buf3;
	int *buf4;
	int *buf5;

	printf("\e[1;31m-- Exercício 01: \e[0m");

	buf0 = ft_range(2, 7);
	buf1 = ft_range(1, 1000);
	buf2 = ft_range(-10, -5);
	buf3 = ft_range(28, 16);
	buf4 = ft_range(590, 1200);
	buf5 = ft_range(7, 9);

	if (buf0 == NULL)
		printf("KO, range 2 - 7 returned NULL\n");
	else if (buf1 == NULL)
		printf("KO, range 1 - 1000 returned NULL\n");
	else if (buf2 == NULL)
		printf("KO, range -10 - -5 returned NULL\n");
	else if (buf3 != NULL)
		printf("KO, range 28 - 16 should return NULL\n");
	else if (buf4 == NULL)
		printf("KO, range 590 - 1200 returned NULL\n");
	else if (buf5 == NULL)
		printf("KO, range 7 - 9 returned NULL\n");
	else if (!validate_range(buf0, 2, 7))
		printf("KO, range 2 - 7 is invalid\n");
	else if (!validate_range(buf1, 1, 1000))
		printf("KO, range 1 - 1000 is invalid\n");
	else if (!validate_range(buf2, -10, -5))
		printf("KO, range -10 - -5 is invalid\n");
	else if (!validate_range(buf3, 28, 16))
		printf("KO, range 28 - 16 is invalid\n");
	else if (!validate_range(buf4, 590, 1200))
		printf("KO, range 590 - 1200 is invalid\n");
	else if (!validate_range(buf5, 7, 9))
		printf("KO, range 7 - 9 is invalid\n");
	else
		printf("OK\n");

	free(buf0);
	free(buf1);
	free(buf2);
	free(buf3);
	free(buf4);
	free(buf5);
}
#endif

#if defined(ALL) || defined(EX02)
int		ft_ultimate_range(int **range, int min, int max);

void	exercicio02()
{
	int *buf0 = NULL;
	int *buf1 = NULL;
	int *buf2 = NULL;
	int *buf3 = NULL;
	int *buf4 = NULL;
	int *buf5 = NULL;
	int ret;

	printf("\e[1;31m-- Exercício 02: \e[0m");

	if ((ret = ft_ultimate_range(&buf0, 2, 7) != 5))
		printf("KO, range 2 - 7 has size 5 got %i\n", ret);
	else if ((ret = ft_ultimate_range(&buf1, 1, 1000)) != 999)
		printf("KO, range 1 - 1000 has size 999 got %i\n", 999);
	else if ((ret = ft_ultimate_range(&buf2, -10, -5)) != 5)
		printf("KO, range -10 - -5 has size 5 got %i\n", ret);
	else if ((ret = ft_ultimate_range(&buf3, 28, 16)) != 0)
		printf("KO, range 28 = 16 has size 0 got %i\n", ret);
	else if ((ret = ft_ultimate_range(&buf4, 590, 1200)) != (610))
		printf("KO, range 590 - 1200 has size 610 got %i\n", ret);
	else if ((ret = ft_ultimate_range(&buf5, 7, 9)) != (9 - 7))
		printf("KO, range 7 - 9 has size 2 got %i\n", ret);
	else if ((ret = ft_ultimate_range(NULL, 7, 9)) != -1)
		printf("KO, range = NULL should return -1, got %i\n", ret);
	else if (buf0 == NULL)
		printf("KO, range 2 - 7 returned NULL\n");
	else if (buf1 == NULL)
		printf("KO, range 1 - 1000 returned NULL\n");
	else if (buf2 == NULL)
		printf("KO, range -10 - -5 returned NULL\n");
	else if (buf3 != NULL)
		printf("KO, range 28 - 16 should return NULL\n");
	else if (buf4 == NULL)
		printf("KO, range 590 - 1200 returned NULL\n");
	else if (buf5 == NULL)
		printf("KO, range 7 - 9 returned NULL\n");
	else if (!validate_range(buf0, 2, 7))
		printf("KO, range 2 - 7 is invalid\n");
	else if (!validate_range(buf1, 1, 1000))
		printf("KO, range 1 - 1000 is invalid\n");
	else if (!validate_range(buf2, -10, -5))
		printf("KO, range -10 - -5 is invalid\n");
	else if (!validate_range(buf3, 28, 16))
		printf("KO, range 28 - 16 is invalid\n");
	else if (!validate_range(buf4, 590, 1200))
		printf("KO, range 590 - 1200 is invalid\n");
	else if (!validate_range(buf5, 7, 9))
		printf("KO, range 7 - 9 is invalid\n");
	else
		printf("OK\n");

	free(buf0);
	free(buf1);
	free(buf2);
	free(buf3);
	free(buf4);
	free(buf5);
}
#endif

int	main(void)
{
#if defined(ALL) || defined(EX00)
	exercicio00();
#endif
#if defined(ALL) || defined(EX01)
	exercicio01();
#endif
#if defined(ALL) || defined(EX02)
	exercicio02();
#endif
}
