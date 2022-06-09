/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:55:56 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/08 14:57:55 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int n;

	n = (int *)malloc(sizeof(int) * (max - min));

	if(n == 0)
	{
		return (0);
	}
	return (n);
}

int	main()
{
	printf("%d", ft_range(1, 5)); 
	return (0);
}
