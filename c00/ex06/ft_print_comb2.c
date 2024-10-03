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
	char	nb_a_div;
	char	nb_a_mod;
	char	nb_b_div;
	char	nb_b_mod;

	nb_a_div = (a / 10) + 48; //transform char to int
	nb_a_mod = (a % 10) + 48;
	nb_b_div = (b / 10) + 48;
	nb_b_mod = (b % 10) + 48;
	write(1, &nb_a_div, 1);
	write(1, &nb_a_mod, 1);
	write(1, " ", 1);
	write(1, &nb_b_div, 1);
	write(1, &nb_b_mod, 1);
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

/* int main()
{
    ft_print_comb2();
    return 0;
} */