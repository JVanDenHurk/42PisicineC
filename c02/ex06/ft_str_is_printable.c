/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:03:19 by jvan-den          #+#    #+#             */
/*   Updated: 2022/05/30 15:13:05 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("Is printable: %d\n", ft_str_is_printable("t"));
	printf("Not printable: %d\n", ft_str_is_printable("€"));
}
*/
