/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 04:15:47 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/05 07:41:49 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <string.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int main(void)
{
	const char* str1 = "batata frita";
	const char* str2 = "maCarroni";

	printf("\e[1;31m-- Exercício 00: \e[0m");
	if ((int) strlen(str1) == ft_strlen((char*) str1) && (int) strlen(str2) == ft_strlen((char*) str2))
		printf("OK\n");
	else
		printf("KO, strlen(\"%s\") = %i, got %i. strlen(\"%s\") = %i, got %i.", str1, (int) strlen(str1), ft_strlen((char*) str1), str2, (int) strlen(str2), ft_strlen((char*) str2));

	printf("\e[1;31m-- Exercício 01: Compare as strings\e[0m\n");
	ft_putstr((char*) str1);
	printf("\n%s  (certa)\n\n", str1);

	ft_putstr((char*) str2);
	printf("\n%s  (certa)\n\n", str2);

	printf("\e[1;31m-- Exercício 02: Compare os nums\e[0m\n");
	int num;

	num = -42;
	ft_putnbr(num);
	printf("\n%i (certo)\n\n", num);

	num = INT_MAX;
	ft_putnbr(num);
	printf("\n%i (certo)\n\n", num);

	num = INT_MIN;
	ft_putnbr(num);
	printf("\n%i (certo)\n\n", num);

	num = 0;
	ft_putnbr(num);
	printf("\n%i (certo)\n\n", num);

	num = 42;
	ft_putnbr(num);
	printf("\n%i (certo)\n\n", num);

	printf("\e[1;31m-- Exercício 03: \e[0m");
	int ret;

	if ((ret = ft_atoi("\n\t\r\v\r++++---420")) != -420)
		printf("KO expected -420 got %i\n", ret);
	else if ((ret = ft_atoi("\n\t\r\v\r   --+++++643564ab435")) != 643564)
		printf("KO expected 643564 got %i\n", ret);
	else if ((ret = ft_atoi("0")) != 0)
		printf("KO expected 0 got %i\n", ret);
	else if ((ret = ft_atoi("   ---2147483648")) != -2147483648)
		printf("KO expected -2147483648 got %i\n", ret);
	else if ((ret = ft_atoi("7")) != 7)
		printf("KO expected 7 got %i\n", ret);
	else
		printf("OK\n");

	printf("\e[1;31m-- Exercício 04: Compare os nums\e[0m\n");

	num = -42;
	ft_putnbr_base(num, "01t3f56789");
	printf("\n%s (certo)\n\n", "-ft");

	num = INT_MIN;
	ft_putnbr_base(num, "0123456789");
	printf("\n%i (certo)\n\n", num);

	num = 0;
	ft_putnbr_base(num, "01");
	printf("\n0 (certo)\n\n");

	num = 2;
	ft_putnbr_base(num, "01");
	printf("\n10 (certo)\n\n");

	num = 65;
	ft_putnbr_base(num, "0123456789abcdef");
	printf("\n41 (certo)\n\n");

	num = 77;
	ft_putnbr_base(num, "mrdoc");
	printf("\nomd (certo)\n\n");

	printf("Não deve aparecer nada até....\n");
	num = -42;
	ft_putnbr_base(num, "01t+f56789");

	num = INT_MIN;
	ft_putnbr_base(num, "012-456789");

	num = 0;
	ft_putnbr_base(num, "");

	num = 2;
	ft_putnbr_base(num, "1");

	num = 65;
	ft_putnbr_base(num, "01234516789abcdef");

	num = 77;
	ft_putnbr_base(num, "mrdmoc");
	printf(".....aqui\n");

	printf("\e[1;31m-- Exercício 05:\e[0m ");

	if ((ret = ft_atoi_base("\n\t\r\v\r++++---420", "0123456789")) != -420)
		printf("KO expected -420 got %i\n", ret);
	else if ((ret = ft_atoi_base("\n\t\r\v\r   --+++++qtmyz", "abcdefghijklmnopqrstuvwxyz")) != 7654321)
		printf("KO expected 7654321 got %i\n", ret);
	else if ((ret = ft_atoi_base("   \n \n  a", "0a")) != 1)
		printf("KO expected 0 got %i\n", ret);
	else if ((ret = ft_atoi_base("   ---1041342111628", "0123456")) != -2147483648)
		printf("KO expected -2147483648 got %i\n", ret);
	else if ((ret = ft_atoi_base("7", "07")) != 1)
		printf("KO expected 7 got %i\n", ret);
	else if ((ret = ft_atoi_base("7", "")) != 0)
		printf("KO expected 0 got %i\n", ret);
	else if ((ret = ft_atoi_base("+++0324", "sbsd")) != 0)
		printf("KO expected 0 got %i\n", ret);
	else if ((ret = ft_atoi_base("+++0324", "0")) != 0)
		printf("KO expected 0 got %i\n", ret);
	else
		printf("OK\n");
}
