/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:26:07 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/02 16:28:47 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}	
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power -1);
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
}
*/
