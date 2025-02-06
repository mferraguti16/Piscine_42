/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 09:45:18 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/03 15:20:19 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	
	printf("Value of a is : %d\n", div);
	printf("Value of b is : %d\n", mod);
}