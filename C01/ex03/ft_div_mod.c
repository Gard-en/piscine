/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:46:15 by scatches          #+#    #+#             */
/*   Updated: 2023/01/31 16:46:18 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	ft_putchar(*div + 48);
	ft_putchar(' ');
	ft_putchar(*mod + 48);
}
/*
int	main(void)
{
	int div;
	int mod;

	ft_div_mod(10,7, &div, &mod);
	return (0);
}
*/
