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

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int nums[])
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

void	ft_print_comb2(void)
{
	int		series[3];
	char	output[6];

	series[0] = 0;
	series[1] = 0;
	series[2] = 0;
	while (series[1] < 10)
	{
		ft_print_number(series);
		ft_putchar(',');
		ft_putchar(' ');
		if (series[2] >= 99)
		{
			series[1]++;
			series[2] = series[1];
		}
		series[2]++;
		series[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}