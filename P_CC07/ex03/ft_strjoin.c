/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:29:13 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/15 09:14:13 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	sep_len(char *sep)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (sep[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}

int	str_len(int size, char **str)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			counter++;
		}
		i++;
	}
	return (counter);
}

char	*str_cat(char *store, char **strs, char *sep, int size)
{
	int	i;
	int	i2;
	int	j;

	i = 0;
	i2 = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			store[i2] = strs[i][j++];
			i2++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			store[i2] = sep[j++];
			i2++;
		}
		i++;
	}
	store[i2] = '\0';
	return (store);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*store;
	int		seplen;
	int		strnglen;

	if (size == 0)
	{
		store = malloc(1);
		return (store);
	}
	seplen = sep_len(sep);
	strnglen = str_len(size, strs);
	store = malloc(sizeof(char) * (strnglen + seplen * (size - 1)) + 1);
	if (store == NULL)
		return (NULL);
	str_cat(store, strs, sep, size);
	return (store);
}

// int    main(void)
// {

// 	char *strs[] = {"Hello", "Mom"};
//     char *separator = " ";
//     printf("%s$\n",  ft_strjoin(2, strs, separator));
// }