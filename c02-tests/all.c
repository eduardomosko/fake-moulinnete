/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:11:51 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/10 00:04:37 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>

size_t			strlcpy(char *dest, const char* src, size_t n);

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
//char			*ft_print_memory(void *addr, unsigned int size);

int main()
{
	char *mem = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

/*
	if (argc > 1 && strcmp(argv[1], "12") == 0)
	{
		ft_print_memory(mem, strlen(mem));
		return (0);
	}
*/
	printf("-- Exercicio 00: ");

	char str0[] = "Ninguem liga";
	char str1[] = "outra 777 sad2 func";
	char str2[] = "striGn Mais doida\n doia\\varioschar\r\r\r";
	char str3[] = "";
	char str4[] = "aAlphGASDabASdetc";
	char buffer0[100];
	char buffer1[100];

	char *ret0 = ft_strcpy(buffer0, str0);
	char *ret1 = strcpy(buffer1, str0);

	if (strcmp(buffer0, buffer1) != 0)
		printf("KO, expected string %s got %s", buffer1, buffer0);
	else if (ret1 = strcpy(buffer0, str0), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strcpy(buffer0, str1), strcpy(buffer1, str1), strcmp(buffer0, buffer1) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strcpy(buffer0, str1), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strcpy(buffer0, str2), strcpy(buffer1, str2), strcmp(buffer0, buffer1) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strcpy(buffer0, str2), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strcpy(buffer0, str3), strcpy(buffer1, str3), strcmp(buffer0, buffer1) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strcpy(buffer0, str3), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else
		printf("OK");
	printf("\n");

	printf("-- Exercicio 01: ");
	size_t str0l = strlen(str0);
	size_t str1l = strlen(str1) + 10;
	size_t str2l = strlen(str2) - 7;
	size_t str3l = strlen(str3);

	if (ret0 = ft_strncpy(buffer0, str0, str0l), strncpy(buffer1, str0, str0l), strncmp(buffer0, buffer1, str0l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strncpy(buffer0, str0, str0l), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strncpy(buffer0, str1, str1l), strncpy(buffer1, str1, str1l), strncmp(buffer0, buffer1, str1l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strncpy(buffer0, str1, str1l), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strncpy(buffer0, str2, str2l), strncpy(buffer1, str2, str2l), strncmp(buffer0, buffer1, str2l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strncpy(buffer0, str2, str2l), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else if (ret0 = ft_strncpy(buffer0, str3, str3l), strncpy(buffer1, str3, str3l), strncmp(buffer0, buffer1, str3l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1 = strncpy(buffer0, str3, str3l), ret0 != ret1)
		printf("KO, expected return %p got %p", ret1, ret0);

	else
		printf("OK");
	printf("\n");

	printf("-- Exercicio 02: ");

	if (ft_str_is_alpha(str0) != 0)
		printf("KO, %s is alphabetic", str0);
	else if (ft_str_is_alpha(str1) != 0)
		printf("KO, %s is not alphabetic", str1);
	else if (ft_str_is_alpha(str2) != 0)
		printf("KO, %s is not alphabetic", str2);
	else if (ft_str_is_alpha(str3) != 1)
		printf("KO, %s is alphabetic", str3);
	else if (ft_str_is_alpha(str4) != 1)
		printf("KO, %s is alphabetic", str4);
	else
		printf("OK");

	printf("\n");

	printf("-- Exercicio 03: ");
	char nums[] = "092885103418801";


	if (ft_str_is_numeric(nums) != 1)
		printf("KO, %s is numeric", nums);
	else if (ft_str_is_numeric(str1) != 0)
		printf("KO, %s is not numeric", str1);
	else if (ft_str_is_numeric(str2) != 0)
		printf("KO, %s is not numeric", str2);
	else if (ft_str_is_numeric(str3) != 1)
		printf("KO, %s is numeric", str3);
	else if (ft_str_is_numeric(str4) != 0)
		printf("KO, %s is not numeric", str4);
	else
		printf("OK");

	printf("\n");

	printf("-- Exercicio 04: ");
	char lower[] = "asdgsdghineiodsf";


	if (ft_str_is_lowercase(lower) != 1)
		printf("KO, %s is lowercase", lower);
	else if (ft_str_is_lowercase(str1) != 0)
		printf("KO, %s is not lowercase", str1);
	else if (ft_str_is_lowercase(str2) != 0)
		printf("KO, %s is not lowercase", str2);
	else if (ft_str_is_lowercase(str3) != 1)
		printf("KO, %s is lowercase", str3);
	else if (ft_str_is_lowercase(str4) != 0)
		printf("KO, %s is not lowercase", str4);
	else
		printf("OK");

	printf("\n");

	printf("-- Exercicio 05: ");
	char upper[] = "AEWFDGHAE";

	if (ft_str_is_uppercase(upper) != 1)
		printf("KO, %s is uppercase", upper);
	else if (ft_str_is_uppercase(str1) != 0)
		printf("KO, %s is not uppercase", str1);
	else if (ft_str_is_uppercase(str2) != 0)
		printf("KO, %s is not uppercase", str2);
	else if (ft_str_is_uppercase(str3) != 1)
		printf("KO, %s is uppercase", str3);
	else if (ft_str_is_uppercase(str4) != 0)
		printf("KO, %s is not uppercase", str4);
	else
		printf("OK");

	printf("\n");


	printf("-- Exercicio 06: ");
	buffer0[1] = 0;

	for(int i = CHAR_MIN; i <= CHAR_MAX; ++i)
	{
		buffer0[0] = i;
		if ((!!isprint(i)) != (!!ft_str_is_printable(buffer0)))
		{
			if (i != 0)
			{
				printf("KO char %i is %sprintable\n", i, isprint(i) ? "" : "not ");
				goto EX07;
			}
		}
	}

	char not_printable[] = "\n";

	if (ft_str_is_printable(not_printable) != 0)
		printf("KO, %s is not printable", not_printable);
	else if (ft_str_is_printable(str1) != 1)
		printf("KO, %s is printable", str1);
	else if (ft_str_is_printable(str2) != 0)
		printf("KO, %s is not printable", str2);
	else if (ft_str_is_printable(str3) != 1)
		printf("KO, %s is printable", str3);
	else if (ft_str_is_printable(str4) != 1)
		printf("KO, %s is printable", str4);
	else
		printf("OK");

	printf("\n");

EX07:
	printf("-- Exercicio 07: ");
	char to_upper0[] = "aBbasdsadfSDAFasdf";
	char to_upper1[] = "aice!3$fasdFEDad";


	if (ft_strupcase(to_upper0) != to_upper0)
		printf("KO, wrong return");
	else if (ft_strupcase(to_upper1) != to_upper1)
		printf("KO, wrong return");
	else if (strcmp(to_upper0, "ABBASDSADFSDAFASDF") != 0)
		printf("KO, expected ABBASDSADFSDAFASDF got %s", to_upper0);
	else if (strcmp(to_upper1, "AICE!3$FASDFEDAD") != 0)
		printf("KO, expected AICE!3$FASDFEDAD got %s", to_upper1);
	else
		printf("OK");


	printf("\n");

	printf("-- Exercicio 08: ");
	char to_lower0[] = "SAHDUFUASddaAFEAD";
	char to_lower1[] = "adsiEAFEASDFAD0-=+[]asdifAFeajafielIJIHHIJ";

	if (ft_strlowcase(to_lower0) != to_lower0)
		printf("KO, wrong return");
	else if (ft_strlowcase(to_lower1) != to_lower1)
		printf("KO, wrong return");
	else if (strcmp(to_lower0, "sahdufuasddaafead") != 0)
		printf("KO, expected got %s", to_lower0);
	else if (strcmp(to_lower1, "adsieafeasdfad0-=+[]asdifafeajafielijihhij") != 0)
		printf("KO, expected adsieafeasdfad0-=+[]asdifafeajafielijihhij got %s", to_lower1);
	else
		printf("OK");

	printf("\n");

	printf("-- Exercicio 09: ");
	char cap0[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char cap1[] = "voT{r^+t,^~,@ f>lC9h.sn99";

	if (ft_strcapitalize(cap0) != cap0)
		printf("KO, wrong return");
	else if (strcmp(cap0, "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un") != 0)
		printf("KO, expected Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un got %s", cap0);
	if (ft_strcapitalize(cap1) != cap1)
		printf("KO, wrong return");
	else if (strcmp(cap1, "Vot{R^+T,^~,@ F>Lc9h.Sn99") != 0)
		printf("KO, expected Vot{R^+T,^~,@ F>Lc9h.Sn99 got %s", cap1);
	else
		printf("OK");

	printf("\n");

	printf("-- Exercicio 10: ");

	size_t ret0s, ret1s;

	if (ret0s = ft_strlcpy(buffer0, str0, str0l), strlcpy(buffer1, str0, str0l), strncmp(buffer0, buffer1, str0l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str0, str0l), ret0s != ret1s)
		printf("KO, expected return %zu got %zu in str0", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str1, str1l), strlcpy(buffer1, str1, str1l), strncmp(buffer0, buffer1, str1l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str1, str1l), ret0s != ret1s)
		printf("KO, expected return %zu got %zu in str1", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str2, str2l), strlcpy(buffer1, str2, str2l), strncmp(buffer0, buffer1, str2l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str2, str2l), ret0s != ret1s)
		printf("KO, expected return %zu got %zu in str2", ret1s, ret0s);

	else if (ret0s = ft_strlcpy(buffer0, str3, str3l), strlcpy(buffer1, str3, str3l), strncmp(buffer0, buffer1, str3l) != 0)
		printf("KO, expected %s got %s", buffer1, buffer0);
	else if (ret1s = strlcpy(buffer0, str3, str3l), ret0s != ret1s)
		printf("KO, expected return %zu got %zu in str3", ret1s, ret0s);

	else
		printf("OK");
	printf("\n");

	printf("-- Exercicio 11: Compare as strings\n");
	char strtest0[] = {'0', '1', 3, 26, '2', '3', 12, 'f', '\n', 'a', 'b', '\0'};
	char strtest1[] = {'0', 'C', 'b', 127, 2, 'a', -82, 'b', -1, '\0'};

	char strans0[] = "01\\03\\1a23\\0cf\\0aab";
	char strans1[] = "0Cb\\7f\\02a\\aeb\\ff";

	ft_putstr_non_printable(strtest0);
	printf("\t==\t%s\n", strans0);

	ft_putstr_non_printable(strtest1);
	printf("\t==\t%s\n", strans1);

	printf("\n");

/*
	printf("-- Exercicio 12: Verifique o output\n");

	printf("\nCaso 1:\n");
	char *ret = ft_print_memory(mem, strlen(mem));

	if (ret != mem)
	{
		printf("\n\tKO, return %p is not addr %p\n", ret, mem);
		return 1;
	}

	printf("\nCaso 2:\n");
	ret = ft_print_memory(str2, 35);

	if (ret != str2)
	{
		printf("\n\tKO, return %p is not addr %p\n", ret, str2);
		return 1;
	}

	printf("\nCaso 3, não deve haver nada:\n");
	ret = ft_print_memory(str2, 0);

	if (ret != str2)
	{
		printf("\n\tKO, return %p is not addr %p\n", ret, str2);
		return 1;
	}

	printf("\nCaso 4:\n");
	ret = ft_print_memory(mem, (strlen(mem) - 12));

	if (ret != mem)
	{
		printf("\n\tKO, return %p is not addr %p\n", ret, mem);
		return 1;
	}

	printf("\nCaso 5:\n");
	ret = ft_print_memory(mem, 1);

	if (ret != mem)
	{
		printf("\n\tKO, return %p is not addr %p\n", ret, mem);
		return 1;
	}

	printf("\n");
*/
}

