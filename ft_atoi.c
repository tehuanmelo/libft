/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:47:42 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/18 22:12:18 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
**      The atoi() function converts the initial portion of the
**      string pointed to by str to int representation.
** 
*/

#include "libft.h"

 int    ft_atoi(const char *str)
 {
    int res;
    int sign;
    char *s;

    res = 0;
    sign = 1;
    while (*str == 32 || *str >= 9 && *str <= 13)
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return (res * sign);
 }
