/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:36:42 by mferragu          #+#    #+#             */
/*   Updated: 2022/09/01 21:53:56 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11); //int min case
		return ;
	}
	if (nb < 0) //if nb neg
	{
		write(1, "-", 1); //putdown the minus sign
		nb = -nb; // -nb + -nb go back in positive
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10); //recursion
	}

		nb_char = (nb % 10) + 48;
		write(1, &nb_char, 1);
}

#include <stdio.h>
int	main(void)
{
	ft_putnbr(543210); // Test positive number
	write(1, "\n", 1);
	ft_putnbr(-12345); // Test negative number
	write(1, "\n", 1);
	ft_putnbr(0); // Test zero
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // Test INT_MIN
	write(1, "\n", 1);
	ft_putnbr(2147483647); // Test INT_MAX
	write(1, "\n", 1);
	return (0);
} 

#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(atoi(argv[1])); // don't forget atoi if you use argc argv
		return (0);
	}
	return (1);
}
