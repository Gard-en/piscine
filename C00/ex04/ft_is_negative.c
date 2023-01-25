/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:01:07 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 12:01:08 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	output;

	if (!n || n >= 0)
	{
		output = 'P';
	}
	else
	{
		output = 'N';
	}
	write(1, &output, sizeof(output));
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
