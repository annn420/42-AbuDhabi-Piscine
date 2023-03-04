/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:18:52 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/04 17:18:57 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	length_of_dest;
	int	src_counter;

	length_of_dest = 0;
	src_counter = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	while (src[src_counter] != '\0')
	{
		dest[length_of_dest] = src[src_counter];
		src_counter++;
	}
	dest[length_of_dest] = '\0';
	return (dest);
}

// #include<stdio.h>
// #include<string.h>
// int	main()
// {
// 	char arr1[25] = "scho";
// 	char arr2[] = "ol";
// 	printf("%s", ft_strcat(arr1, arr2));
// 	return 0;
// }