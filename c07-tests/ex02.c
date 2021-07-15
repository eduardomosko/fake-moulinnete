/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:04:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 00:22:46 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int res;
	int offset;
	int *range;

	res = ft_ultimate_range(&range, 0, 8);
	if (res == -1)
	{
		printf("Error\n");
		return (1);
	}
	offset = 0;
	while (offset < 8)
	{
		printf("%d ", range[offset]);
		offset++;
	}
	printf("\nres: %d", res);
	printf("\n");

	int *arr1;
	int *arr2;
	int *arr3;
	int *arr4;
	int *arr5;
	int *arr6;
	int size1;
	int size2;
	int size3;
	int size4;
	int size5;
	int size6;

	size1 = ft_ultimate_range(&arr1, 1, 2);
	size2 = ft_ultimate_range(&arr2, -1, 2);
	size3 = ft_ultimate_range(&arr3, -3, -1);
	size4 = ft_ultimate_range(&arr4, -2, -3);
	size5 = ft_ultimate_range(&arr5, 0, 10);
	size6 = ft_ultimate_range(&arr6, -2, 0);

	offset = 0;
	while (offset < 1)
	{
		printf("%d ", arr1[offset]);
		offset++;
	}
	printf("| min %d ", 1);
	printf("| max %d ", 2);
	printf("| size %d", size1);
	printf("\n");
	offset = 0;
	while (offset < 3)
	{
		printf("%d ", arr2[offset]);
		offset++;
	}
	printf("| min %d ", -1);
	printf("| max %d ", 2);
	printf("| size %d", size2);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr3[offset]);
		offset++;
	}
	printf("| min %d ", -3);
	printf("| max %d ", -1);
	printf("| size %d", size3);
	printf("\n");
	offset = 0;
	while (offset < 10)
	{
		printf("%d ", arr5[offset]);
		offset++;
	}
	printf("| min %d ", -2);
	printf("| max %d ", -3);
	printf("| size %d", size5);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr6[offset]);
		offset++;
	}
	printf("| min %d ", -2);
	printf("| max %d ", 0);
	printf("| size %d", size6);
	return (0);
}
