/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:26:29 by scatches          #+#    #+#             */
/*   Updated: 2023/01/30 13:26:32 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int a;
    int b;

    a = 1;
    b = 3;
    
    ft_putchar(a + 48);
    ft_putchar(b + 48);
    ft_putchar(' ');
    ft_swap(&a, &b);

    ft_putchar(a + 48);
    ft_putchar(b + 48);
    ft_putchar(' ');
    return (0);
}
