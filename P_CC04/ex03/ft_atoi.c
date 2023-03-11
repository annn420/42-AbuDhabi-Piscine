/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:50:35 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/07 21:23:29 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	initializer(int *i, int *total, int *signs_counter)
{
	(*i) = 0;
	(*total) = 0;
	(*signs_counter) = 1;
}

void	atoi_helper(const char *str, int *i, int *total)
{
	(*total) += str[(*i)] - 48;
	(*i)++;
	while (str[(*i)] >= 48 && str[(*i)] <= 57)
	{
		(*total) *= 10;
		(*total) += str[(*i)] - 48;
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	signs_counter;

	initializer(&i, &total, &signs_counter);
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else if (str[i] == 43 || str[i] == 45)
		{
			if ((str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == 32)
				return (0);
			else if (str[i] == 45)
				signs_counter *= -1;
			i++;
		}
		else if (str[i] >= 65 && str[i] <= 122)
			break ;
		else
			atoi_helper(str, &i, &total);
	}
	total *= signs_counter;
	return (total);
}

int main(void)
{
	char *s = "    		 --- +--+1234ab567";
	printf("%d", ft_atoi(s));
	return 0;
}