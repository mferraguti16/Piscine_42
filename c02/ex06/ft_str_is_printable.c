/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:37:04 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/07 16:23:29 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}

// version 2 //
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "Qh.>'8)'";
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	str = "\\sp";
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	str = "\0";
	printf("the string \\0 = %d\n", ft_str_is_printable(str));
	str = "";
	printf("the string is null = %d\n", ft_str_is_printable(str));
	str = "\\";
	printf("the string \\ = %d\n", ft_str_is_printable(str));
	str = "\\stx";
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	str = "\x01"; // soh non printable
	printf("the string \\SOH = %d\n", ft_str_is_printable(str));
	str = "\x0C"; // np non printable
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	str = "\t"; // non printable
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	str = "\n"; // non printable
	printf("the string %s = %d\n", str, ft_str_is_printable(str));
	return (0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argv[1][0] == '\0') {
			printf("argv[1] result is : 1\n"); //line command ./ft_str_is_printable ""
		} else {
			printf("argv[1] result is : %d\n", ft_str_is_printable(argv[1]));
		}
	}
	return (0);
}

/* line command test :
$'\0' null
$'\t' tab
$'\n' new line
$'\r' retour chariot
$'\a' bell
$'\' backspace
$'\' form feed
*/