/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:54:45 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/28 15:39:45 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32; // uppercase before lowercase so +32 //
		i++;
	}
	return (str);
}

// version 2 //
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32; // uppercase before lowercase so +32 //
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	s[16] = "QUE DES LOWCASE";
	printf("%s\n", ft_strlowcase(s));
	char	q[12] = "BONUS TRACK";
	printf("%s", ft_strlowcase(q));
	return (0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
	printf("argv[1] equal : %s\n", ft_strlowcase(argv[1]));
		return (0);
	}
	return (1);
}