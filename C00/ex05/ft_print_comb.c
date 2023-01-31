/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:25 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 12:15:27 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
		hundreds = i / 100;
		tens = (i / 10) % 10;
		units = i % 10;
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_print_comb(void)
{
	int		series[4];
	char	output[5];

	series[0] = 0;
	while (series[1] <= 7)
	{
		series[1] = series[0] / 100;
		series[2] = (series[0] / 10) % 10;
		series[3] = series[0] % 10;
		if (series[1] < series[2] && series[2] < series[3])
		{	
			ft_putchar(series[1] + '0');
			ft_putchar(series[2] + '0');
			ft_putchar(series[3] + '0');
			if (series[1] < 7)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		series[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
