/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:45:08 by justin            #+#    #+#             */
/*   Updated: 2022/05/30 09:38:32 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[1] != '\0' && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int main(void)
{
	char word1[12] = "start";
	char word2[] = "end";
	int n;

	n = 3;
	printf("%s", ft_strncat(word1, word2, n));
	return (0);
}
*/
