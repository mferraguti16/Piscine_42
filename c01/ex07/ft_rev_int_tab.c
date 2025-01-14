/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 04:29:13 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/02 22:29:03 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;
	int	copy;

	i = 0;
	rev = size -1; /* rev = size - i -1; */
	while (i < size / 2)
	{
		copy = tab[i];
		tab[i] = tab[rev];
		tab[rev] = copy;
		i++;
		rev--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putab(int *tab,int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

int	main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab, 6);
	ft_putab(tab, 6);

	write(1, "\n", 1);
	
	int tab1[6] = {5, 8, 3, 1, 5, 6};
	ft_rev_int_tab(tab1, 6);
	ft_putab(tab1, 6);

	return 0;
}