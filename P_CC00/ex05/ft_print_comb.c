/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:36:21 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/02/25 06:36:23 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(int a, int b, int c)
{
a = '0';
	while (a <= '9')
	{
	b = a + 1;
		while (b <= '9')
		{
		c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
				{
					write(1, ", ", 2);
				}
			c++;
			}
		b++;
		}
	a++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	printing(a, b, c);
}
