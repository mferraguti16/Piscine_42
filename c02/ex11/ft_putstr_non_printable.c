/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 05:10:49 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/29 00:45:18 by mferragu         ###   ########.fr       */
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
/* int	main()
{
	char s[] = "dare*(#@!$";
	ft_putstr_non_printable(s);
	return (0);
} */

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr_non_printable(argv[1]);
		return (0);
	}
	return (1);
}

/* Écrire fonction qui affiche une chaîne de char à l’écran. 
Si cette chaîne contient des caractères non-imprimables,
ils devront être affichés sous forme hexa-décimale 
(en minuscules) en les précédant d’un "backslash".
if 32 <= str[i] && str[i] <= 126 == PRINTABLE
if 32 < str[i] && str[i] < 126 == NON PRINTABLE */
