/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:44:51 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/17 02:49:21 by mferragu         ###   ########.fr       */
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

int main(int argc, char **argv) //argument du main
{
    if (argc > 1) //et non argc==2 car pas mentionné seulement un argument après le main//
    {
        ft_putchar(argv[1][0]); //va dans le premier argument après le nom du prog[1] au premier indice[0]
        return (0);
    } else {
        return (1);
    }
}*/

/* Do not forget the [0] or you will have the following error: 
incompatible pointer to integer conversion passing 'char *'(string) to parameter of type 'char'(char c); 
dereference with * [-Wint-conversion]

    This error indicates that you tried to pass a string of char (so multiple char) as ouptut instead of the one single char requested. 
    argv[1][0]  =>  ./ft_putchar abc  =>  a% 
    argv[1]  =>  ./ft_putchar abc  =>  abc% */