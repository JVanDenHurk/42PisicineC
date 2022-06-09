/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:17:30 by justin            #+#    #+#             */
/*   Updated: 2022/06/08 13:57:08 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int	i;
	i = 0;

	while (s[i] != '\0')
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

	dest = malloc(sizeof(char) * ft_strlen(src));
	
	if(dest == NULL)
	{
		return NULL;
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	printf("%s",ft_strdup("yes"));
	return (0);
}
