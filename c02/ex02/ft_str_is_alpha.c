/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:56:03 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/24 19:53:22 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* positive version */
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

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h> 
int	main(void)
{
	char	e[15] = "Lavieestcool";
	printf("%d\n", ft_str_is_alpha(e));
	char	f[10] = "09434*76^";
	printf("%d\n", ft_str_is_alpha(f));
	char	g[20] = "lacha9neestlong(e";
	printf("%d\n", ft_str_is_alpha(g));
	char	h[2] = " ";
	printf("%d\n", ft_str_is_alpha(h));
	char	i[22] = "lesGrainesduSABLIER";
	printf("%d\n", ft_str_is_alpha(i));
	return (0);
}

int	main(void)
{
	char	*str;

	str = "ALPHAalpha";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "{{{{{{";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
	str = "\0";
	printf("%s = %d\n", str, ft_str_is_alpha(str));
}

int     main(int argc, char *argv[])
{
        char    c;

        (void)argc;
        c = '0';
        ft_putstr(argv[1]);
        c += ft_str_is_alpha(argv[1]);
        write(1, "\n", 1);
        write(1, &c, 1);
        write(1, "\n", 1);
        return (0);
}

/* + 48 ou + '0' transform int en char 
char to int is - 48 ou - '0' */