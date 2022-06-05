/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:17:30 by justin            #+#    #+#             */
/*   Updated: 2022/06/05 13:50:03 by justin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = malloc(sizeof(char) * i + 1);
	if (dest[i] > src[i])
	{
		dest[i] = '\0';
	}
}

int main()
{
	char c[] = "yes";

	printf("%s",ft_strdup(c));
}
