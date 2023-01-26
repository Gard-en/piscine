/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:33:30 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 14:33:32 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
		Tens = (i / 10) % 10;
		Units = i % 10;

		Logic:
		Iterate through nums array, splitting known 2-digit integers into individual
		characters in a char array.

		int 23 -> {'2', '3'}
*/
void	ft_putnbr(int nums[])
{
	int		i;
	char	output[2];

	i = 0;
	while (i < 2)
	{
		if (nums[i] < 9)
		{
			ft_putchar('0');
			ft_putchar(nums[i] + '0');
		}
		else
		{
			ft_putchar((nums[i] / 10) % 10 + '0');
			ft_putchar(nums[i] % 10 + '0');
		}
		if (i == 0)
		{
			ft_putchar(' ');
		}
		i++;
	}
}

/*
		Logic:
		int array (a, b)
		
		a = 0, b = 0

		While a < 100 loop

		if b <= 99 
			a = a + 1;
			b = a + 1;

		b = b + 1;	
*/

void	ft_print_comb2(void)
{
	int		series[2];
	char	output[6];

	series[0] = 0;
	series[1] = 0;
	while (series[0] < 100)
	{
		ft_putnbr(series);
		ft_putchar(',');
		ft_putchar(' ');
		if (series[1] >= 99)
		{
			series[0]++;
			series[1] = series[0];
		}
		series[1]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
