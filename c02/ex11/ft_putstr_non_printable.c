/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:43:33 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/18 12:54:45 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char str)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[str / 16], 1);
	write(1, &base[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (32 > str[i] || str[i] > 126)
		{
			c = str[i];
			hexa(c);
		} else {
			write(1, &str[i], 1);
		} 
		i++;
	}
}

#include <stdio.h>
int	main()
{
	char s[] = "dare*(#@!$";
	ft_putstr_non_printable(s);
	return (0);
} 

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr_non_printable(argv[1]);
		return (0);
	}
	return (1);
}

/* if 32 <= str[i] && str[i] <= 126 == PRINTABLE
if 32 < str[i] && str[i] < 126 == NON PRINTABLE */
