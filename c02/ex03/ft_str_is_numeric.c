/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:12:39 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/28 15:30:30 by mferragu         ###   ########.fr       */
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
    printf("\\0 = %d\n", ft_str_is_numeric(str)); // \0 control char not printable ASCII value 0
	return (0);
}
