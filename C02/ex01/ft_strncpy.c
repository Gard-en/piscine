/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:21:11 by scatches          #+#    #+#             */
/*   Updated: 2023/02/02 11:21:14 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest);
}
/*
int	main(void)
{
	char	destination[] = "source";
	char	source[] = "destiny";

	ft_strncpy(destination, source, 3);
	printf("%s\n", destination);
    printf("%s", strncpy(destination, source, 3));
	return (0);
}
*/