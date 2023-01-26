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
#include <stdio.h>
#include <unistd.h>

/*
		hundreds = i / 100;
		tens = (i / 10) % 10;
		units = i % 10;
*/

void	ft_print_comb(void)
{
	int		series[4];
	char	output[5];

	series[0] = 0;
	while (series[0] < 1000)
	{
		series[1] = series[0] / 100;
		series[2] = (series[0] / 10) % 10;
		series[3] = series[0] % 10;
		if (series[1] < series[2] && series[2] < series[3])
		{
			output[0] = series[1] + '0';
			output[1] = series[2] + '0';
			output[2] = series[3] + '0';
			output[3] = ',';
			output[4] = ' ';
			write(1, &output[0], sizeof(output));
		}
		series[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
