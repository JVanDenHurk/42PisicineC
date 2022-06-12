/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:44:18 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/12 15:24:53 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (size);
}
/*
#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	result;
	int *range;

	i = 0;
	min = 4;
	max = 12;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
