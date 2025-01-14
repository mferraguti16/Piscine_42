/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:44:51 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/17 02:49:21 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--; 
    }
}

int  main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}