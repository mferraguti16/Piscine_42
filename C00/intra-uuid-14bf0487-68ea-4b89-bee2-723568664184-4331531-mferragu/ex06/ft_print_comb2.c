/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:23:41 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/17 02:41:57 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b)
{
	char	d;
	char	f;
	char	g;
	char	h;

	d = (a / 10) + '0';
	f = (a % 10) + '0';
	g = (b / 10) + '0';
	h = (b % 10) + '0';
	write(1, &d, 1);
	write(1, &f, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &h, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}
