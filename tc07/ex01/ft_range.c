/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:55:56 by jvan-den          #+#    #+#             */
/*   Updated: 2022/06/06 12:08:26 by jvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *n;
	int i;

	if(!(n = (int*)malloc(sizeof(*n) * (max - min))));
	{
		return NULL;
	}


}

int	main()
{
	printf("%", ft_range(1, 5)); 
	return (0);
}
