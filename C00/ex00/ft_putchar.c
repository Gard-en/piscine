/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:30:54 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 09:31:44 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*We must use STDOUT_FILEN0 from unistd.h when outputting char with write()*/

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	main(void)
{
	char	c;

	printf("Enter a char:\n");
	c = scanf("%c", &c);
	ft_putchar(c);
	return (0);
}