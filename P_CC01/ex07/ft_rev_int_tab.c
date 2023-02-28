/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:30:23 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/02/27 21:45:52 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
			temp = tab[counter];
			tab[counter] = tab[size - 1 - counter];
			tab[size - 1 - counter] = temp;
			counter++;
	}
}
