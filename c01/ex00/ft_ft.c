/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 04:18:08 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/18 18:14:39 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42; // changes the value at the memory address that the pointer refers to, here 42
}

/* #include <stdio.h>
int	main()
{
	int	a;
	int *ptr;

	ptr = &a;

	a = 67;
	ft_ft(ptr);
	printf("%d\n", *ptr);
	printf("%d\n", a);
	printf("%p\n", &a); // print the memory address of the variable a in hexadecimal (%p for pointer)
} */