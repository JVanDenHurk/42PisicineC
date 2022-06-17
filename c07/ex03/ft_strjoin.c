/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:52:51 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/12 15:08:47 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_strjoin_len(int size, char **strs, char *sep)
{
	int	length;
	int	z;

	length = 0;
	z = 0;
	while (z < size)
	{
		length += ft_strlen(strs[z]);
		z++;
	}
	length += (size - 1) * ft_strlen(sep);
	return (length + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		z;
	char	*join;
	char	*head;

	z = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	join = (char *) malloc(ft_strjoin_len(size, strs, sep) * sizeof(char));
	head = join;
	if (!join)
		return (NULL);
	z = 0;
	while (z < size)
	{
		ft_strcpy(join, strs[z]);
		join = join + ft_strlen(strs[z]);
		if (z < (size - 1))
		{
			ft_strcpy(join, sep);
			join = join + ft_strlen(sep);
		}
		z++;
	}
	*join = '\0';
	return (head);
}
/*
#include <stdio.h>

int	main()
{
	char *strs[3] = {"whatsup", "whatsup", "strange person"};
	char *sep = "....";
	printf("%s/n", ft_strjoin(3, strs, sep));
}*/
