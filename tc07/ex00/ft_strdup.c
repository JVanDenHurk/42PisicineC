/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:17:30 by justin            #+#    #+#             */
/*   Updated: 2022/06/06 10:43:32 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int	i;
	i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;

	if (!(dest = (char*)malloc(sizeof(char) * ft_strlen(src))))
	{
		return NULL;
	}
	while (*src)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char s[] = "yes";

	printf("%s",ft_strdup(s));
	return (0);
}
