/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:59:55 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/02/26 13:01:40 by aajagunj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	generatecolumns(int x)
{
	int		width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar('A');
		}
		else if (width < x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		width++;
	}
}

void	generaterowwithspaces(int x, int y)
{
	int		columncounter;

	columncounter = x - 1;
	ft_putchar('B');
	while (columncounter > 1)
	{
		ft_putchar(' ');
		columncounter--;
	}
	if (columncounter == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	singlecol(int y)
{
	int		rowcounter;

	rowcounter = y;
	while (rowcounter > 0)
	{
		if (rowcounter == y || rowcounter == 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		rowcounter--;
	}
}

void	rush(int x, int y)
{
	int	temp;

	temp = y;
	if (x == 1)
	{
		singlecol(y);
	}
	else
	{
		while (temp != 0)
		{
			if (temp == 1 || temp == y)
			{
				generatecolumns(x);
			}
			else if (temp >= 2 || temp < y)
			{
				generaterowwithspaces(x, y);
			}
			temp--;
		}
	}
}
