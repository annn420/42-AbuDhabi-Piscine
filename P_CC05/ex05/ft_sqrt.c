/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:37:29 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/05 17:59:58 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	temp;

	temp = nb;
	if (temp <= 0)
		return (0);
	if (temp == 1)
		return (1);
	index = 2;
	if (temp >= 2)
	{
		while (index * index <= temp)
		{
			if (index * index == temp)
				return (index);
			index++;
		}
	}
	return (0);
}

// int    main(void)
// {
// 	printf("ft_sqrt of %d is %d\n", 0, ft_sqrt(0));
// 	printf("ft_sqrt of %d is %d\n", 1, ft_sqrt(1));
// 	printf("ft_sqrt of %d is %d\n", 2, ft_sqrt(2));
// 	printf("ft_sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
// 	return 0;
// }
