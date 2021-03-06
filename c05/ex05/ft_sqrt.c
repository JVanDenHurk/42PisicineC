/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:29:48 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/03 10:51:39 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb && nb <= 46340)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(4));
}
*/
