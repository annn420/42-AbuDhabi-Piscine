/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:29:10 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/11 18:29:10 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int	ft_strlen(int *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return 0;
	if (!(arr = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return -1;
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min ++;
	}
	*range = arr;
	return (ft_strlen(*range));
}