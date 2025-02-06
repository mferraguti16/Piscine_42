/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:29:05 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/05 16:38:31 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
} 

// version 2 //
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h> 
int	main(void)
{
	char	*str;

	str = "ALPHAalpha";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "{{{{{{";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "\0";
	printf("\\0 = %d\n", ft_str_is_alpha(str)); // \0 not printable so no need to call str for %s
	str = "Lavieestc00l";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "09434*76^";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "lacha9neestlong(e";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "\\sp";
	printf("\\sp = %d\n", ft_str_is_alpha(str)); // \sp not printable so no need to call str for %s
} 

int	main(int argc, char **argv)
{
	if (argc > 1)
	printf("argv[1] result is : %d\n", ft_str_is_alpha(argv[1]));
	return (0);
}