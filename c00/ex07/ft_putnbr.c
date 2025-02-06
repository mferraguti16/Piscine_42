/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:37:17 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/11 10:18:20 by mathilfe         ###   ########.fr       */
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

#include <stdlib.h> // lib for atoi
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(atoi(argv[1])); // don't forget atoi if you use argc argv
		return (0);
	}
	return (1);
}
