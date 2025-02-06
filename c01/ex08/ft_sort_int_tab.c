/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:22:02 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/04 16:18:37 by mathilfe         ###   ########.fr       */
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
