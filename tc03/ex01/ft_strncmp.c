/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:29:30 by justin            #+#    #+#             */
/*   Updated: 2022/06/01 09:24:59 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "compare unsigned int";
	char s2[] = "comp";
	int n;

	n = 4;
	
	printf("%d\n", ft_strncmp(s1, s2, n));
}
*/
