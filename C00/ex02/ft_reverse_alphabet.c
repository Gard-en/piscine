/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:36:19 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 10:36:23 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z' + 1;
	while (--ch >= 'a')
	{
<<<<<<< HEAD
		write(STDOUT_FILENO, &ch, 1);
=======
		write(1, &ch, 1);
		ch--;
>>>>>>> 8b2727f9ef306a4a95691dd2dc6f3339b2bd1e11
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
