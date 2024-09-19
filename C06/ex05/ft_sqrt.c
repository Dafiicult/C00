/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmossaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:22:20 by hmossaid          #+#    #+#             */
/*   Updated: 2024/09/16 17:49:33 by hmossaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	indx;
	long	i;

	i = nb;
	if (i <= 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	indx = 2;
	if (i >= 2)
	{
		while (indx * indx <= i)
		{
			if (indx * indx == i)
			{
				return (indx);
			}
			indx++;
		}
	}
	return (0);
}
/*
int main()
{
    printf("%d\n", ft_sqrt(2));
    printf("%d\n", ft_sqrt(25));
    printf("is end (%d)", ft_sqrt(16));
}
*/
