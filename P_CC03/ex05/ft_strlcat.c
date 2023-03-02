/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:22:17 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/02 15:38:38 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_length = j;
	src_length = ft_strlen(src);
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src [i] != '\0' && i < size - dest_length - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_length + src_length);
}

// int main (void)
// {
// 	char src[] = " World";
//     char dest [] = "Hello";
//     printf("%i \n", ft_strlcat(dest, src, 20));
//     printf("%s \n", dest);
// }	