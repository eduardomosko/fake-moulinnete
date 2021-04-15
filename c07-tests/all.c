/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:51:32 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/15 03:20:26 by emendes-         ###   ########.fr       */
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

#if defined(ALL) || defined(EX03)
char	*ft_strjoin(int size, char **strs, char *sep);

void	exercicio03()
{
	printf("\e[1;31m-- Exercício 03: \e[0m");
	char *buf0[] = {"caminla", "eduardo", "mauricio", "larissa", "wagner", "gabriel"};

	char *ret0 = NULL;
	char *ret1 = NULL;
	char *ret2 = NULL;
	char *ret3 = NULL;
	char *ret4 = NULL;
	char *ret5 = NULL;
	char *ret6 = NULL;

	char *tru0 = "caminla : eduardo : mauricio : larissa : wagner : gabriel";;
	char *tru1 = "caminla, eduardo";;
	char *tru2 = "larissa-wagner-gabriel";;
	char *tru3 = "eduardomauricio";;

	if (strcmp(ret0 = ft_strjoin(6, buf0, " : "), tru0) != 0)
		printf("KO, test00\n");
	else if (strcmp(ret1 = ft_strjoin(2, buf0, ", "), tru1) != 0)
		printf("KO, test01\n");
	else if (strcmp(ret2 = ft_strjoin(3, buf0 + 3, "-"), tru2) != 0)
		printf("KO, test02\n");
	else if (strcmp(ret3 = ft_strjoin(2, buf0 + 1, ""), tru3) != 0)
		printf("KO, test03\n");
	else if (strcmp(ret4 = ft_strjoin(0, buf0, "0"), "") != 0)
		printf("KO, test04\n");
	else if (strcmp(ret5 = ft_strjoin(2, buf0 + 2, "0"), "mauricio0larissa") != 0)
		printf("KO, test05\n");
	else if (strcmp(ret6 = ft_strjoin(-3, buf0 + 2, "0"), "") != 0)
		printf("KO, test06\n");
	else
		printf("OK\n");

	free(ret0);
	free(ret1);
	free(ret2);
	free(ret3);
	free(ret4);
	free(ret5);
	free(ret6);
}
#endif

#if defined(ALL) || defined(EX04)
char				*ft_convert_base(char *nbr, char *base_from, char *base_to);

void exercicio04()
{
	printf("\e[1;31m-- Exercício 04: \e[0m");
	fflush(stdout);

	char *str0 = "101010";
	char *str1 = "   -+-+-101010";
	char *str2 = "   --ff";
	char *str3 = "gff";
	char *str4 = "42";

	char *base0 = "01";
	char *base1 = "0123456789abcdef";
	char *base2 = "f1g23";
	char *base3 = "0123456789";
	char *base4 = "..1234";

	char *ret0 = ft_convert_base(str0, base0, base3);
	char *ret1 = ft_convert_base(str1, base0, base3);
	char *ret2 = ft_convert_base(str2, base1, base3);
	char *ret3 = ft_convert_base(str3, base2, base3);
	char *ret4 = ft_convert_base(str4, base3, base0);
	char *ret5 = ft_convert_base(str4, base3, base4);
	char *ret6 = ft_convert_base("-80000000", "0123456789abcdef", "0123456789");

	int not_ok0 = (strcmp(ret0, "42") != 0);
	int not_ok1 = (strcmp(ret1, "-42") != 0);
	int not_ok2 = (strcmp(ret2, "255") != 0);
	int not_ok3 = (strcmp(ret3, "50") != 0);
	int not_ok4 = (strcmp(ret4, "101010") != 0);
	int not_ok5 = (ret5 != NULL);
	int not_ok6 = (strcmp(ret6, "-2147483648") != 0);

	if (not_ok0)
		printf("KO, test00 expected 42 got %s\n", ret0);
	else if (not_ok1)
		printf("KO, test01 expected -42 got %s\n", ret1);
	else if (not_ok2)
		printf("KO, test02 expected 255 got %s\n", ret2);
	else if (not_ok3)
		printf("KO, test03 expected 50 got %s\n", ret3);
	else if (not_ok4)
		printf("KO, test04 expected 101010 got %s\n", ret4);
	else if (not_ok5)
		printf("KO, test05 expected (null) got %s\n", ret5);
	else if (not_ok6)
		printf("KO, test06 expected -2147483648 got %s\n", ret5);
	else
		printf("OK\n");

	free(ret0);
	free(ret1);
	free(ret2);
	free(ret3);
	free(ret4);
}
#endif

#if defined(ALL) || defined(EX05)
char				**ft_split(char *str, char *charset);

int					list_cmp(char **list1, char **list2)
{
	while (*list1 != NULL && *list2 != NULL && strcmp(*list1, *list2) == 0)
	{
		++list1;
		++list2;
	}
	return (list1 == NULL && list2 == NULL);
}

void				print_list(char **list)
{
	printf("{");
	while (*list != NULL)
		printf("\"%s\", ", *list++);
	printf("NULL}");
}

void				free_list(char **list)
{
	char **itlist = list;

	while (*itlist != NULL)
		free(*itlist++);
	free(list);
}

void				exercicio05()
{
	printf("\e[1;31m-- Exercício 05: \e[0m");

	char **ret0 = ft_split("a,b,c,d,e,f", ",");
	char **ret1 = ft_split("a,b,,c,d,e,f", ",");
	char **ret2 = ft_split(",, , ,a,b,,c,d,e,f", ", ");
	char **ret3 = ft_split("", ", ");

	char *tru0[] = {"a", "b", "c", "d", "e", "f", NULL};
	char *tru1[] = {NULL};

	if (list_cmp(ret0, tru0) != 0)
	{
		printf("KO, expected ");
		print_list(tru0);
		printf(" got ");
		print_list(ret0);
		printf("\n");
	}
	else if (list_cmp(ret1, tru0) != 0)
	{
		printf("KO, expected ");
		print_list(tru0);
		printf(" got ");
		print_list(ret1);
		printf("\n");
	}
	else if (list_cmp(ret2, tru0) != 0)
	{
		printf("KO, expected ");
		print_list(tru0);
		printf(" got ");
		print_list(ret2);
		printf("\n");
	}
	else if (list_cmp(ret3, tru1) != 0)
	{
		printf("KO, expected ");
		print_list(tru0);
		printf(" got ");
		print_list(ret2);
		printf("\n");
	}
	else
		printf("OK\n");

	free_list(ret0);
	free_list(ret1);
	free_list(ret2);
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
#if defined(ALL) || defined(EX03)
	exercicio03();
#endif
#if defined(ALL) || defined(EX04)
	exercicio04();
#endif
#if defined(ALL) || defined(EX05)
	exercicio05();
#endif
}
