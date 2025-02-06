/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:17:43 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/04 18:36:52 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	src[] = "Bonjourno"; 
	char	dest[10]; // 9 char + 1 for null byte

	ft_strcpy(dest, src);
	
	// print strings
	printf("src is : %s\n", src);
	printf("dest is : %s\n", dest);

	//check null byte position
	printf("Valeur à dest[8]: %c\n", dest[8]); // %c print char type data

	if (dest[9] == '\0') // array so begins at 0 so dest[9] for checking null byte not 10!
    	printf("Le caractère nul \\0 est bien copié à la position 9.\n");
    else
        printf("Le caractère nul \\0 n'est pas présent ou mal positionné.\n");

	return (0);
}

/* The strcpy() function copies the string pointed to by src,
including the terminating null byte ('\0'),
to the buffer pointed to by dest.
The strings may not overlap, and the destination string dest must be 
large enough to receive the copy.
Beware of  buffer overruns!  (See BUGS.) */