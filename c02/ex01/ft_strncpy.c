/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:46:17 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/22 23:20:04 by mferragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int main (void)
{
        char src[]= "SEGFAULT";
        char dest[9];
        unsigned int n = 5;
        printf("%s",ft_strncpy(dest, src, n));
        return 0;
}

The strcpy() function copies the string pointed
to by src, including the terminating null byte ('\0'), 
to the buffer pointed to by dest.
The strings may not overlap, and the destination 
string dest must be large enough to receive the copy.
Beware of  buffer overruns!  (See BUGS.)
The  strncpy()  function  is similar, 
except that at most n bytes of src are copied.  
Warning: If there is no null byte among the
first n bytes of src, the string placed 
in dest will not be null-terminated.
unsigned int = positive or null, never negative */
