/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:23:23 by justin            #+#    #+#             */
/*   Updated: 2022/05/21 13:14:20 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	b = a + 1;
	c = a + 2;
	while (a++ <= '7')
	{
		while (b++ <= '8')
		{
			while (c++ <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ",", 1);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
