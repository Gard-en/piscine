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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a' - 1;
	while (++ch <= 'z')
	{
<<<<<<< HEAD
		write(STDOUT_FILENO, &ch, 1);
=======
		ft_putchar(ch);
		ch++;
>>>>>>> 8b2727f9ef306a4a95691dd2dc6f3339b2bd1e11
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

