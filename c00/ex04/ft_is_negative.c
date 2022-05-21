/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:56:39 by jvan-den          #+#    #+#             */
/*   Updated: 2022/05/19 16:24:08 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	_n;
	char	p;

	_n = 'N';
	p = 'P';
	if (n < 1)
	{		
		write(1, &_n, 1);
		write(1, "\n", 1);
	}
	else if (n > 1)
	{
		write(1, &p, 1);
		write(1, "\n", 1);
	}
}
/*
int	main(int n)
{
	ft_is_negative(-1);
	return (0);
}
*/
