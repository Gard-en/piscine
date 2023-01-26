/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:34:54 by scatches          #+#    #+#             */
/*   Updated: 2023/01/26 12:34:57 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
	Start from the right and work your way left
*/

void    ft_print_combn(int n)
{
    char    t[11];
    int        i;

    if (n < 1 || n > 9)
        return ;
    *t = '0';
    i = 0;
    while (++i < n)
        t[i] = t[i - 1] + 1;
    t[n] = ',';
    t[n + 1] = ' ';
    while (*t <= 58 - n)
    {
        write(1, t, n + ((*t != 58 - n) ? 2 : 0));
        i = n;
        while (i--)
            if (++t[i] <= 58 - n + i)
                break ;
        while (++i > 0 && i < n)
            t[i] = t[i - 1] + 1;
    }
}

int main(void)
{
	ft_print_combn(2);
	return (0);
}