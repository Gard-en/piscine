/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:16:06 by scatches          #+#    #+#             */
/*   Updated: 2023/02/01 14:17:59 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char	destination[] = "source";
	char	source[] = "destiny";

	ft_strcpy(destination, source);
	printf("%s", destination);
	return (0);
}
*/