/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:22:39 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/25 19:59:12 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	copy;

	copy = *a;
	*a = *b;
	*b = copy;
}

/* int	main(void)
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i value was 7 and now is : %d\n",*a);
	printf("j value was 3 and now is : %d\n",*b);
} */