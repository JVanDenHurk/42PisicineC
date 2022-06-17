/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:55:56 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/12 15:22:36 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	s;

	i = 0;
	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	s = max - min;
	ptr = (int *)malloc(s * sizeof (int));
	while (i <= s)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	*result;

	min = 4;
	max = 12;
	size = max - min;
	i = 0;
	result = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}
*/
