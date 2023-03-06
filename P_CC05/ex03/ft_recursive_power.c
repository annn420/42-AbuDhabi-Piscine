/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:08:49 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/05 19:19:05 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	return (1);
}

// int main()
// {
// 	printf("%d", ft_recursive_power(2, 5));
// 	return 0;
// }