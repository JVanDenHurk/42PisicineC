/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:19:30 by jvan-den          #+#    #+#             */
/*   Updated: 2022/05/19 13:40:02 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;	

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
}
*/
