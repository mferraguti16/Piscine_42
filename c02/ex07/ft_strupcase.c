/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:34:19 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/28 15:38:53 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// version 1 //
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; // lowercase after uppercase so -32 //
		i++;
	}
	return (str);
} 

// verison 2 //
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32; // lowercase after uppercase so -32 //
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char    s[15] = "que des upper";
 	printf("%s\n", ft_strupcase(s));
	char	w[19] = "pile dix huit";
	printf("%s", ft_strupcase(w));
 	return (0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
	printf("argv[1] equal : %s\n", ft_strupcase(argv[1]));
		return (0);
	}
	return (1);
}