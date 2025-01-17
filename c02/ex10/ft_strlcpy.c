/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:42:49 by mferragu          #+#    #+#             */
/*   Updated: 2022/08/29 13:18:43 by mferragu         ###   ########.fr       */
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