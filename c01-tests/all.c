/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:19:44 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/08 23:15:09 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#if !defined(ALL) && defined(EX00) && defined(EX01) && defined(EX02) && defined(EX03) && defined(EX04) && defined(EX05) && defined(EX06) && defined(EX07) && defined(EX08)
# define ALL
#endif

#if defined(ALL) || defined(EX00)
void	ft_ft(int *nbr);

void	exercicio00()
{
	printf("\e[1;31m-- Exercício 00: \e[0m");

	int out;
	ft_ft(&out);
	if (out == 42)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, out=%i. Expected out=42\n", out);
	}
}
#endif

#if defined(ALL) || defined(EX01)
void	ft_ultimate_ft(int *********nbr);

void	exercicio01()
{
	printf("\e[1;31m-- Exercício 01: \e[0m");

	int out = 77;
	int *of8 = &out;
	int **of7 = &of8;
	int ***of6 = &of7;
	int ****of5 = &of6;
	int *****of4 = &of5;
	int ******of3 = &of4;
	int *******of2 = &of3;
	int ********of1 = &of2;
	int *********of = &of1;
	ft_ultimate_ft(of);

	if (out == 42)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, out=%i. Expected out=42\n", out);
	}
}
#endif


#if defined(ALL) || defined(EX02)
void	ft_swap(int *a, int *b);

void	exercicio02()
{
	printf("\e[1;31m-- Exercício 02: \e[0m");
	int a, b;
	a = 7;
	b = 8;
	ft_swap(&a, &b);
	if (a == 8 && b == 7)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, Given a=7 b=8, got a=%i b=%i, expected a=8 b=7\n", a, b);
	}
}
#endif

#if defined(ALL) || defined(EX03)
void	ft_div_mod(int a,int b,int *div,int *mod);
void	exercicio03()
{
	printf("\e[1;31m-- Exercício 03: \e[0m");
	int a, b;
	a = 7;
	b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	if (div == 3 && mod == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, Given a=7 b=2, got div=%i mod=%i, expected div=3 mod=1\n", div, mod);
	}
}

#endif

#if defined(ALL) || defined(EX04)
void	ft_ultimate_div_mod(int *a,int *b);

void	exercicio04()
{
	printf("\e[1;31m-- Exercício 04: \e[0m");
	int a, b;
	a = 11;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	if (a == 3 && b == 2)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, Given a=11 b=3, got a=%i b=%i, expected a=3 b=2\n", a, b);
	}

}
#endif

#if defined(ALL) || defined(EX05)
void	ft_putstr(char *str);

void	exercicio05()
{
	printf("\e[1;31m-- Exercício 05:\e[0m Compare as strings\n");
	const char* str1 = "batata frita";
	const char* str2 = "maCarroni";
	ft_putstr((char*) str1);
	printf(" == ");
	printf("%s", str1);
	printf("\n");

	ft_putstr((char*) str2);
	printf(" == ");
	printf("%s", str2);
	printf("\n");
}
#endif

#if defined(ALL) || defined(EX06)
int		ft_strlen(char *str);

void	exercicio06()
{
	printf("\e[1;31m-- Exercício 06: \e[0m");
	const char* str1 = "batata frita";
	const char* str2 = "maCarroni";
	if ((int) strlen(str1) == ft_strlen((char*) str1) && (int) strlen(str2) == ft_strlen((char*) str2))
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, strlen(\"%s\") = %i, got %i. strlen(\"%s\") = %i, got %i.", str1, (int) strlen(str1), ft_strlen((char*) str1), str2, (int) strlen(str2), ft_strlen((char*) str2));
	}
}
#endif

#if defined(ALL) || defined(EX06)
void	ft_rev_int_tab(int *tab, int size);

void	exercicio07()
{
	printf("\e[1;31m-- Exercício 07: \e[0m");

	int arr[5] = {0, 1, 2, 3, 4};
	int arr2[4] = {1, 2, 4, 3};

	ft_rev_int_tab(arr, 5);
	ft_rev_int_tab(arr2, 4);

	if (!(arr[0] == 4 && arr[1] == 3 && arr[2] == 2 && arr[3] == 1 && arr[4] == 0))
	{
		printf("KO, expected {4, 3, 2, 1, 0} got {%i, %i, %i, %i, %i}\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	}
	else if (!(arr2[0] == 3 && arr2[1] == 4 && arr2[2] == 2 && arr2[3] == 1))
		printf("KO, expected {3, 4, 2, 1} got {%i, %i, %i, %i}\n", arr2[0], arr[1], arr[2], arr[3]);
	else
		printf("OK\n");
}
#endif

#if defined(EX08) || defined(ALL)
void	ft_sort_int_tab(int *tab,int size);

void	exercicio08()
{
	printf("\e[1;31m-- Exercício 08: \e[0m");
	int arr[5] = {4, 3, 1, 2, 0};
	int arr2[4] = {1, 2, 4, 3};

	ft_sort_int_tab(arr2, 4);
	ft_sort_int_tab(arr, 5);


	if (!(arr[0] == 0 && arr[1] == 1 && arr[2] == 2 && arr[3] == 3 && arr[4] == 4))
		printf("KO, expected {0, 1, 2, 3, 4} got {%i, %i, %i, %i, %i}\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	else if (!(arr2[0] == 1 && arr2[1] == 2 && arr2[2] == 3 && arr2[3] == 4))
		printf("KO, expected {1, 2, 3, 4} got {%i, %i, %i, %i}\n", arr2[0], arr[1], arr[2], arr[3]);
	else
		printf("OK\n");
}
#endif

int		main(void)
{
#if defined(EX00) || defined(ALL)
	exercicio00();
#endif
#if defined(EX01) || defined(ALL)
	exercicio01();
#endif
#if defined(EX02) || defined(ALL)
	exercicio02();
#endif
#if defined(EX03) || defined(ALL)
	exercicio03();
#endif
#if defined(EX04) || defined(ALL)
	exercicio04();
#endif
#if defined(EX05) || defined(ALL)
	exercicio05();
#endif
#if defined(EX06) || defined(ALL)
	exercicio06();
#endif
#if defined(EX07) || defined(ALL)
	exercicio07();
#endif
#if defined(EX08) || defined(ALL)
	exercicio08();
#endif
}

