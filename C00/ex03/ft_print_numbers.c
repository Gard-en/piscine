/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:41:30 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 10:41:32 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	intchar;

	i = -1;
	while (++i <= 9)
	{
		intchar = i + 48;
		write(STDOUT_FILENO, &intchar, 1);
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
