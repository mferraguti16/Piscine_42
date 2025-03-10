/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:14:26 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/08 14:39:45 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	// convert all uppercase letters to lowercase for clarity
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32; // +32 to lower
		i++;
	}
	// capitalize the first char of the string in uppercase
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32; // -32 to upper

	i = 1;
	while (str[i] != '\0')
	{
		// check if the previous char is a separator
		if (!(('a' <= str[i - 1] && str[i - 1] <= 'z') || 
		      ('A' <= str[i - 1] && str[i - 1] <= 'Z') || 
		      ('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			// capitalize the current char if it's a lowercase
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] -= 32; // -32 to upper
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	s[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(s));
	char	t[38] = "le bonheur est dans les choses simples";
	printf("%s\n", ft_strcapitalize(t));
	char	u[25] = "42 heures au 42-carre+;42";
	printf("%s\n", ft_strcapitalize(u));

	return (0);
}

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
