/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:08:11 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/17 02:52:01 by mferragu         ###   ########.fr       */
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

/*int main(void)
{
    ft_is_negative(-123456);
    ft_is_negative(0);
    ft_is_negative(123456);
    ft_is_negative(-2147483648); // int min
    ft_is_negative(2147483647);  // int max
    //ft_is_negative(-2147483649); // int min loop - falls in positif (int long)//
    //ft_is_negative(21474836448); // int max loop - falls in negatif (int long)//
    return (0);
}*/

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		(ft_is_negative(atoi(argv[1]));
		return (0);
	}
	return (1);
}*/