/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 04:40:48 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/28 21:47:01 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	copy;

	i = 0;
	while (i < size -1) // because the end of my tab is always /0
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			copy = tab[i];
			tab[i] = tab[j];
			tab[j] = copy;
			i = -1;
			j = +1;
		}
		i++;
		j++;
	}
}

#include <stdio.h>
int	main(void)
{
	int     b;

	b = 0;
	int tab[5] = {19, -55, 3, 5, 8};
	ft_sort_int_tab(tab, 5);
	while (tab[b])
	{
		printf("%d ", tab[b]);
		b++;
	}
	return (0);
}
