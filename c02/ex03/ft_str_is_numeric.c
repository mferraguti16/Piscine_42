/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:16:22 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/05 19:56:02 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// version 2 //
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "0123456789";
	printf("%s = %d\n", str, ft_str_is_numeric(str));
	str = "01234567a9";
	printf("%s = %d\n", str, ft_str_is_numeric(str));
	str = "{{{{{{";
	printf("%s = %d\n", str, ft_str_is_numeric(str));
	str = "\0";
    printf("\\0 = %d\n", ft_str_is_numeric(str)); // \0 control char not printable so no need to call str for %s
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	printf("argv[1] result is : %d\n", ft_str_is_numeric(argv[1]));
	return (0);
}