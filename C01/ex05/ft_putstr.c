/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:08:39 by scatches          #+#    #+#             */
/*   Updated: 2023/01/31 18:08:41 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}



int main(void)
{
    char str[] = "hello";
    char *ptr = str;

    ft_putstr(ptr);
    return (0);
}