/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:23:14 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/02/27 09:23:15 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int temp1;
    int temp2;

    temp1 = *a / *b;
    temp2 = *a % *b;

    *a = temp1;
    *b = temp2;
}