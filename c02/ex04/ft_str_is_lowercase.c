/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:38:12 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/06 17:06:13 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// version 2 //
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*str;

		str = "abcdefghijklmnopqrstuvwxyz";
		printf("%s = %d\n", str, ft_str_is_lowercase(str));
		str = "#loPp*&8";
		printf("%s = %d\n", str, ft_str_is_lowercase(str));
		str = "012345";
		printf("%s = %d\n", str, ft_str_is_lowercase(str));
		str = "\0";
		printf("\\0 = %d\n", ft_str_is_lowercase(str));
}

int	main(int argc, char **argv)
{
	if (argc > 1) 
	{
		if (argv[1][0] == '\0') 
		//cannot use argv[1][0] in my printf cause the function needs a *char not only one char 
			printf("argv[1] result is : 1\n"); //to test in command line do: ./ft_str_is_lowercase ""
		else
			printf("argv[1] result is : %d\n", ft_str_is_lowercase(argv[1]));
	}
	return (0);
}
