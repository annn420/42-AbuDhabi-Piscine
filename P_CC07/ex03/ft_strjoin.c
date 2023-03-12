/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:29:13 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/12 16:08:05 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	length_of_dest;
	int	src_counter;

	length_of_dest = 0;
	src_counter = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	while (src[src_counter] != '\0')
	{
		dest[length_of_dest++] = src[src_counter];
		src_counter++;
	}
	dest[length_of_dest] = '\0';
	return (dest);
}

int	strlen_expanded(int size, char **strs, int seplen)
{
	int	exp_length;
	int	i;

	exp_length = 0;
	i = 0;
	while (i < size)
	{
		exp_length += ft_strlen(strs[i]);
		exp_length += seplen;
		i++;
	}
	exp_length -= seplen;
	return (exp_length);
}

char	*ft_strjoin(int size, char *strs[], char *sep)
{
	int		i;
	char	*dest;
	int		exp_length;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	exp_length = strlen_expanded(size, strs, ft_strlen(sep));
	dest = (char *)malloc(sizeof(char) * exp_length + 1);
	if (!dest)
		return (0);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}
	return (dest);
}
