/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 06:07:18 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/11 06:10:16 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char mod; //avoid using putchar

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1; //ou nb = -nb; same
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	mod = nb % 10 + '0';
	write(1, &mod, 1);
}

int main()
{
	ft_putnbr(0); write(1, "\n", 1);
	ft_putnbr(5); write(1, "\n", 1);
	ft_putnbr(42); write(1, "\n", 1);
	ft_putnbr(-42); write(1, "\n", 1);
	ft_putnbr(2147483647); write(1, "\n", 1);
	ft_putnbr(-2147483648); write(1, "\n", 1);
	return (0);
}

#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(atoi(argv[1])); //do not forget atoi et sa lib stdlib
		return (0);
	}
	return (1);
}

/* int min = -2147483648
./putnbr -2147483649 donne 2147483647 (loop --> negatif tombe dans positif)

int max = 2147483647 
./putnbr -2147483648 donne -2147483648 (loop --> positif tombe dans negatif) */