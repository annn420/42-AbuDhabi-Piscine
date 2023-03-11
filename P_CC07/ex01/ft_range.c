/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:29:06 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/11 18:29:06 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int *ft_range(int min, int max)
{
	int *arr;
	int	i;

	if (min >= max || !(arr = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min ++;
	}
	return arr;
}