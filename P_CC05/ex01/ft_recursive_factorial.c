/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:58:02 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/05 17:05:02 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0 || nb > 12)
		return (0);
	return (1);
}

// int main()
// {
// 	printf("%d", ft_recursive_factorial(5));
// 	return 0;
// }