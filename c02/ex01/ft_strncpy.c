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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i; // unsigned int == positive or null, never negative 

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

#include <stdio.h>
int main (void)
{
	char src[]= "SEGFAULT";
    char dest[6]; // argc
    unsigned int n = 5; // SEGFA\0 = 6
	int i = 0;

	ft_strncpy(dest, src, n);

	// print strings
	printf("src is : %s\n", src);
	printf("dest is : %s\n", dest);

	// check position last int n but with %c type char data cause clearer
	while (i < 5)
	{
		printf("Value at dest[%d] : %c\n", i, dest[i]);
		i++;
	}
	// check position null byte with %d calls ASCII value 0 cause not printable cause control char (blank space with %c)
	printf("Valeur à dest[5]: %d\n", dest[5]); 

	if (dest[5] == '\0') // array begins at 0 so dest[5] for checking null byte not 10!
    	printf("Le caractère nul \\0 est bien copié à la position 5.\n");
    else
        printf("Le caractère nul \\0 n'est pas présent ou mal positionné.\n");

	return 0;
}

/* strncpy() is similar at strcpy, 
except that at most n bytes of src are copied.  
Warning: If there is no null byte among the
first n bytes of src, the string placed 
in dest will not be null-terminated.
We have to add it manually */