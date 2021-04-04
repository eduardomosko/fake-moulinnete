/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:19:44 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/01 21:47:36 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a,int b,int *div,int *mod);
void	ft_ultimate_div_mod(int *a,int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab,int size);

int		main(void)
{
	printf("-- Exercício 00: ");

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


	printf("-- Exercício 01: ");
	out = 0;
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

	printf("-- Exercício 02: ");
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

	printf("-- Exercício 03: ");
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

	printf("-- Exercício 04: ");
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

	printf("-- Exercício 05: Compare as strings\n");
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

	printf("-- Exercício 06: ");
	if ((int) strlen(str1) == ft_strlen((char*) str1) && (int) strlen(str2) == ft_strlen((char*) str2))
	{
		printf("OK\n");
	}
	else
	{
		printf("KO, strlen(\"%s\") = %i, got %i. strlen(\"%s\") = %i, got %i.", str1, (int) strlen(str1), ft_strlen((char*) str1), str2, (int) strlen(str2), ft_strlen((char*) str2));
	}

	printf("-- Exercício 07: ");
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


	printf("-- Exercício 08: ");
	ft_sort_int_tab(arr2, 4);
	ft_sort_int_tab(arr, 5);


	if (!(arr[0] == 0 && arr[1] == 1 && arr[2] == 2 && arr[3] == 3 && arr[4] == 4))
		printf("KO, expected {0, 1, 2, 3, 4} got {%i, %i, %i, %i, %i}\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	else if (!(arr2[0] == 1 && arr2[1] == 2 && arr2[2] == 3 && arr2[3] == 4))
		printf("KO, expected {1, 2, 3, 4} got {%i, %i, %i, %i}\n", arr2[0], arr[1], arr[2], arr[3]);
	else
		printf("OK\n");
}

