/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:27:53 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/04 21:25:03 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*unsigned for not storing negative values, in this 
case its specifying the length cahars to store.
This thing also have the same behaviour as strcpy*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include<stdio.h>
int main()
{
	char src[] = "sad";
	char dest[] = "sgfdfgdsgn";

	ft_strncpy(dest, src, 3);
	printf("%s", dest);
	return 0;
}
