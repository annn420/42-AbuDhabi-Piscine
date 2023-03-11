/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:29:13 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/11 18:50:18 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char *ft_strjoin(int size, char *strs[], char *sep)
{
	char *arr;
	int sizeOfAllStrings;
	int i = 0;
	int j = 0;
	int k = 0;

	while (size > 0)
	{
		sizeOfAllStrings += ft_strlen(strs[i++]);
	}
	arr = malloc(sizeof(char) * sizeOfAllStrings + size * 3);
	if (size == 0)
		return (arr);
	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			arr[i] = strs[i][j];
			j++;
		}
		if (strs[i][j] == '\0')
			arr[i] = sep[0];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
