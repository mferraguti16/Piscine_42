/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:47:07 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/24 16:05:09 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// version 2 //
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
} 

#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "QWERTY";
	printf("%s = %d\n", str, ft_str_is_uppercase(str));
	str = "aWe$4;";
	printf("%s = %d\n", str, ft_str_is_uppercase(str));
	str = "\0";
	printf("\\0 = %d\n", ft_str_is_uppercase(str));
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argv[1][0] == '\0') {
			printf("argv[1] result is : 1\n"); //line command ./ft_str_is_uppercase ""
		} else {
			printf("argv[1] result is : %d\n", ft_str_is_uppercase(argv[1]));
		}
	}
	return (0);
}