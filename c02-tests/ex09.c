/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:53:06 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 23:01:29 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);
	printf("str1_c: %s\n", str1);
	printf("str2_c: %s\n", str2);
	printf("str3_c: %s\n", str3);
	printf("str4_c: %s\n", str4);
	return (0);
}
