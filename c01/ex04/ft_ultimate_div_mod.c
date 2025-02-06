/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:29:14 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/03 15:46:06 by mathilfe         ###   ########.fr       */
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