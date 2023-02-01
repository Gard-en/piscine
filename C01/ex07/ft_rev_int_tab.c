/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:03:46 by scatches          #+#    #+#             */
/*   Updated: 2023/01/31 17:03:47 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = size;
	while (i-- >= 0)
	{
		ft_putchar(*(tab + i) + 48);
	}
}
/*
int	main(void)
{
	int	array[3] = {1,2,3};
	int	*tab = array;

	ft_rev_int_tab(tab, sizeof 3);
	return (0);
}
*/