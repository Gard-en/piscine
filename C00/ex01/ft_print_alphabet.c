/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:53:04 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 09:53:07 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a' - 1;
	while (++ch <= 'z')
	{
		write(STDOUT_FILENO, &ch, 1);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
