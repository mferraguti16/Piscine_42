/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:26:29 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/13 18:34:42 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	startend(int x)
{
	int	x = col;

	if (y = 1, x > 0)
	{
		col = 1
		if (col == 1)
		{
			ft_putchar('o')
			col++;
		}
		while (col < x)
		{
			ft_putchar('-')
			col++;
		}
		if (col == x)
		{
			ft_putchar('o')
		}
	}
}

void	mid(int x, int y)
{
	int	x = col;
	int	y = lin;

	if (y = 2, x > 0)
	{
		col = 1
		if ( lin == 2)
		{
			ft_putchar('|')
		}
		while (col < x)
		{
		ft_putchar(' ')
		col++;
		}
		if ( col = x)
		{
			ft_putchar('|')
	}
}


void	startend(int x)
{
	int	x = col;

	if (y = 3, x > 0)
	{
		col = 1
		if (col == 1)
		{
		ft_putchar('o')
		col++;
		}
		while(col < 5)
		{
			ft_putchat('-')
			col++;
		}
		if ( x = 5)
		{
			ft_putchar('o')
		}
	}
}
