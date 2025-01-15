/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:20:03 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/24 19:59:07 by mferragu         ###   ########.fr       */
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
