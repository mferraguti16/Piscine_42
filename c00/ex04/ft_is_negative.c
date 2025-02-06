/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:20:27 by mathilfe          #+#    #+#             */
/*   Updated: 2023/06/29 18:20:33 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n) //no try return in conditions because of void
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
	}
	else
	{
		c = 'P';
		write(1, &c, 1);
	}
    write(1, "\n", 1);
}

int main(void)
{
    ft_is_negative(-123456);
    ft_is_negative(0);
    ft_is_negative(123456);
    ft_is_negative(-2147483648); // int min
    ft_is_negative(2147483647);  // int max
    ft_is_negative(-2147483649); // int min loop falls in positive (int long)//
    ft_is_negative(21474836448); // int max loop falls in negative (int long)//
    return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		(ft_is_negative(atoi(argv[1])));
		return (0);
	}
	return (1);
}