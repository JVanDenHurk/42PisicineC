/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:13:26 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/03 12:21:11 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	b;

	b = 3;
	while (b < argc && b != 0)
	{
		ft_putstr(argv[b]);
		b--;
		write(1, "\n", 1);
	}
}
