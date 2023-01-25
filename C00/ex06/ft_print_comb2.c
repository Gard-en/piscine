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

void	ft_print_comb2(void)
{
	int		a;
	int		b;
    int     i;

	char	series[5];

	a = 00;
	b = 00;
    i = 00;


	while (i < 1000)
	{
		while (a < 100)
		{
            a = 0+i;
            while (b < 10)
            {
                b++;
            }
			a++;
		}
		i++;
	}
}
int	main(void)
{
	ft_print_comb2();
	return (0);
}
