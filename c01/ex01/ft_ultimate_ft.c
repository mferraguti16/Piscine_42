/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:54:17 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/01 15:52:08 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int main(void)
{
	int a = 0;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	ft_ultimate_ft(p9); // and not &p9 that is equal to (int *** *** *** *) which does not exist here!

	printf("Valeur de a : %d\n", a); // must print 42

	return 0;
}