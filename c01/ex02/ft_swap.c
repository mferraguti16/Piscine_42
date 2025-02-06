/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:02:34 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/02 09:19:37 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	copy;

	copy = *a;
	*a = *b;
	*b = copy;
}

#include <stdio.h>
int	main(void)
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i value was 7 and now is : %d\n", *a);
	printf("j value was 3 and now is : %d\n", *b);
}