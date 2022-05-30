/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:34:43 by justin            #+#    #+#             */
/*   Updated: 2022/05/30 09:03:15 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	char str1[] = "0";
	printf("not Aa-Zz: %d\n", ft_str_is_alpha(str1));
	char str2[] = "A";
	printf("is Aa-Zz: %d\n", ft_str_is_alpha(str2));
	char str3[] = "A";
    printf("is empty: %d\n", ft_str_is_alpha(str3));
}
*/
