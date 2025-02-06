/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:10:03 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/01 14:46:23 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42; // changes the value at the memory address that the pointer refers to, here 42
}

#include <stdio.h>
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
}