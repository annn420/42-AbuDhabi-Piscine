/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:46:05 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/02 15:38:28 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length_of_dest;
	unsigned int	src_counter;

	length_of_dest = 0;
	src_counter = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	while (src_counter < nb && src[src_counter] != '\0')
	{
		dest[length_of_dest + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[length_of_dest + src_counter] = '\0';
	return (dest);
}

// #include<stdio.h>
// #include<string.h>
// int	main()
// {
// 	char arr1[25] = "dd";
// 	char arr2[] = "aaaesd";
// 	printf("%s", ft_strncat(arr1, arr2, 4));
// 	return 0;
// }