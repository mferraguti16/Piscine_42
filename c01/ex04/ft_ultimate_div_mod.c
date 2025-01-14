/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:39:35 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/25 17:15:49 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	copy;

	copy = *a;
	*a = copy / *b;
	*b = copy % *b;
}

#include <stdio.h>
int main(void)
{
	int div  = 17;
	int mod  = 5;
	int *a = &div;
	int *b = &mod;

	ft_ultimate_div_mod(a, b);
	printf("div value was 17 and now is : %d\n", *a);
	printf("mod value was 5 and now is : %d\n", *b);
} 