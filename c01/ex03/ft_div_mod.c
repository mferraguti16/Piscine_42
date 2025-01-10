/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:07:00 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/25 17:12:19 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	
	printf("Value of a is : %d\n", div);
	printf("Value of b is : %d\n", mod);
} */