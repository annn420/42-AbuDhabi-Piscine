/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:23:47 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/07 21:40:25 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	in_place;

	in_place = 0;
	(void) argc;
	while (argv[0][in_place] != '\0')
	{
		ft_putchar(argv[0][in_place]);
		in_place++;
	}
	ft_putchar('\n');
	return (0);
}
