/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:30:03 by scatches          #+#    #+#             */
/*   Updated: 2023/02/02 11:30:04 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		num = str[i];
		if (str[i] >= '0' && str[i] <= '9')
		{
			i = 1;
			break ;
		}
		i++;
	}
	if (i == 0)
	{
		i = 1;
	}
	if (i > 1)
	{
		i = 0;
	}
	return (i);
}
/*
int	main(void)
{
	char source[] = "";

	printf("%d", ft_str_is_alpha(source));
	return (0);
}
*/