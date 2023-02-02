/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:40:31 by scatches          #+#    #+#             */
/*   Updated: 2023/02/01 12:40:32 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str + 48);
		str++;
	}
}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < size -1)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				ft_swap(&*(tab + j), &*(tab + j + 1));
			}
		}
	}
}
/*
int	main(void)
{
	int arr[5] = {5,3,6,7,2};
	int *ptr = arr;

	ft_putstr(ptr);
	ft_sort_int_tab(ptr, 5);
	ft_putstr(ptr);
	return (0);
}
*/
