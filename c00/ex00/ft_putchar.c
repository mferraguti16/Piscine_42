/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:44:51 by mathilfe          #+#    #+#             */
/*   Updated: 2023/06/29 16:26:12 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putchar('a');
	return (0);
}

int main(int argc, char **argv) // argument du main
{
    if (argc > 1) //et non argc==2 car pas mentionné seulement un argument après le main//
    {
        ft_putchar(argv[1][0]); // argv[1][0]  ./ft_putchar abc  a%
        return (0);
    } else {
        return (1);
    }
}

/* Don't forget the [0] or you will have error: incompatible pointer to integer conversion 
passing 'char *'(string) to parameter of type 'char'(char c); dereference with * [-Wint-conversion]
Means you tried to pass a string of char (so multiple char) as ouptut instead of the one single char requested.
argv[1][0]  ./ft_putchar abc  a% 
argv[1]  ./ft_putchar abc  abc% */