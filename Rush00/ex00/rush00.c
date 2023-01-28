/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:25 by scatches          #+#    #+#             */
/*   Updated: 2023/01/25 12:15:27 by scatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_getchar(const int row, const int col, const int x, const int y)
{
	char	outchar;

	outchar = 'o';
	if (row == 0 || row == x - 1)
	{
		outchar = '-';
		if (col == 0 || col == y - 1)
			outchar = 'o';
	}
	else
	{
		outchar = ' ';
		if (col == 0 || col == y - 1)
			outchar = '|';
	}
	return (outchar);
}

void	rush(const int y, const int x)
{
	int		row;
	int		col;
	char	outchar;

	row = -1;
	while (++row != x)
	{
		col = -1;
		while (++col != y)
		{
			outchar = ft_getchar(row, col, x, y);
			ft_putchar(outchar);
		}
		ft_putchar('\n');
	}
}
