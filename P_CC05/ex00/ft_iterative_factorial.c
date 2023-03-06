/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:57:50 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/06 10:15:51 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total_factorial;

	total_factorial = 1;
	while (nb > 0)
	{
		total_factorial *= nb;
		nb--;
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	return (total_factorial);
}

// int main()
// {
// 	printf("%d", ft_recursive_factorial(5));
// 	return 0;
// }