/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:30:21 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/17 11:01:43 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (c != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/