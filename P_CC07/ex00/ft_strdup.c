/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:00:43 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/15 09:14:05 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new_string)
		return (NULL);
	while (*src)
		new_string[i++] = *src++;
	new_string[i] = '\0';
	return (new_string);
}

// int main(int argc, char *argv[])
// {
// 	char *str;

// 	if (argc > 1)
// 	{
// 		mine = ft_strdup(argv[1]);
// 		printf("my str: %s", str);
// 	}
// 	return 0;
// }