/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathilfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:12:45 by mathilfe          #+#    #+#             */
/*   Updated: 2023/07/17 15:26:03 by mathilfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (0);

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char	src[10] = "qwertyuiop";
	char	dest[11];
	unsigned int size = 6;
	printf("%u\n", ft_strlcpy(dest, src, size));
	return (0);
} 

/* strlcpy and strlcat are safer alternatives to strncpy and strncat.  
They take the full buffer size, ensuring NUL-termination if size > 0.  
strlcpy copies up to size - 1 characters from src to dest.  
strlcat appends up to size - strlen(dest) - 1 bytes from src to dest.  
Both functions require src (and dest for strlcat) to be NUL-terminated. */