/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:45:53 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/28 12:19:23 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0; 
	// convert all uppercase letters to lowercase for clarity
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32; // +32 upper to lower
		i++;
	}
	// capitalize the first char of the string in uppercase
	if (str[0] >= 'a' && str[0] <= 'z') 
		str[0] -= 32; // -32 lower to upper

	i = 1;
	while (str[i] != '\0')
	{
		// check if the previous char is a separator 
		if ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A') 
			|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z'))
		{
			// capitalize the current char if it's a lowercase
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32; // -32 lower to upper
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
/* int	main(void)
{
	char	s[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(s));
	char	t[38] = "le bonheur est dans les choses simples";
	printf("%s\n", ft_strcapitalize(t));
	char	u[25] = "42 heures au 42-carre+;42";
	printf("%s\n", ft_strcapitalize(u));

	return (0);
} */

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("argv[1] before : %s\n", argv[i]);
			printf("argv[1] after: %s\n", ft_strcapitalize(argv[i]));
			i++;
		}
		return (0);
	}
	return (1);
}
