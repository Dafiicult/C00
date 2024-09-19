/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmossaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:04:38 by hmossaid          #+#    #+#             */
/*   Updated: 2024/09/17 06:22:08 by hmossaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*b;
	int	*i;

	if (min >= max)
		return (0);
	range = max - min;
	b = malloc(range * sizeof(int));
	if (!b)
		return (0);
	index = 0;
	while (index < range)
	{
		b[index] = min + index;
		index++;
	}
	return (b);
}
/*
int main()
{
	int	min;
	int	max;
	int i = 0;
	int *tab;
	int size;

	max = 10;
	min = 2;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
