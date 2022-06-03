/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:00:25 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/02 17:01:43 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;

	while(str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char argv)
{
	ft_putstr(argv[0]);

	return (0);
}
