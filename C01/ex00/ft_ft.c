/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:18:46 by scatches          #+#    #+#             */
/*   Updated: 2023/01/27 09:18:47 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;
	int	*nbr;

	n = 1;
	nbr = &n;
	ft_putnbr(n);
	ft_ft(nbr);
	ft_putchar('\n');
	ft_putnbr(n);
}
