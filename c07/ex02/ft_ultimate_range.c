/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmossaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 06:23:06 by hmossaid          #+#    #+#             */
/*   Updated: 2024/09/18 03:43:40 by hmossaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bod;
	int		*i;
	int		*buffer;
	int		index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bod = max - min;
	i = (buffer = malloc(bod * sizeof(int)));
	if (!i)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bod)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bod);
}

int		main(void)
{
	int	min;
	int	max;
	int	*str;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&str, min, max);
	while(i < size)
	{
		printf("%d, ", str[i]);
		i++;
	}

}
