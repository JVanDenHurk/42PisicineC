/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:37:52 by justin            #+#    #+#             */
/*   Updated: 2022/05/24 13:32:08 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 15;
	b = 2;
	ft_div_mod(a, b, &c, &d);
	printf("divide: %d\n", c);
	printf("Modulo: %d\n", d);
}
*/
