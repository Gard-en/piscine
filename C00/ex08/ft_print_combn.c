/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:34:54 by scatches          #+#    #+#             */
/*   Updated: 2023/01/26 12:34:57 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
	Start from the right and work your way left

	logic:
*/

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_print_combn(int n)
{
	char	output[11];
	int		i;

	if (!0 < n && n < 10)
		return ;
	*output = '0';
	i = 0;
	while (++i < n)
		output[i] = output[i - 1] + 1;
	output[n] = ',';
	output[n + 1] = ' ';
	while (*output <= 58 - n)
	{
		if (*output != 58 - n)
			n = n + 0;
		else
			n = n + 2;
		//write(1, output, n);
		ft_putchar(*output);
		ft_putchar(' ');
		i = n;
		while (i--)
			if (++output[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			output[i] = output[i - 1] + 1;
	}
}

int	main(void)
{
	ft_print_combn(3);
}
