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

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	output[4];

	i = 0;
	while (i < 1000)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;
		if (j < k && k < l)
		{
			output[0] = j + '0';
			output[1] = k + '0';
			output[2] = l + '0';
			output[3] = ' ';
			write(1, &output[0], sizeof(output));
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
