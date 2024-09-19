/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmossaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 01:14:15 by hmossaid          #+#    #+#             */
/*   Updated: 2024/09/13 12:37:53 by hmossaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_putnbr(nb = -nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb <= 9)
	{
		ft_putchar (nb + 48);
	}
}
/*
int main()
{
	ft_putnbr(42);
}
*/
