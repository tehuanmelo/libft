/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:47:48 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/21 22:11:52 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parameters
**     n: the integer to convert.
** Return value
**     The string representing the integer.
**     NULL if the allocation fails.
** External functs.
**     malloc
** Description
**     Allocates (with malloc(3)) and returns a string
**     representing the integer received as an argument.
**     Negative numbers must be handled.
*/

#include "libft.h"

int ft_intlen(int n)
{
    int counter;

    counter = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n *= -1;
        counter++;
    }
    while (n)
    {
        n /= 10;
        counter++;
    }
    return (counter);
}

char *ft_itoa(int n)
{
    char *new;
    int i;
    int arrlen = ft_intlen(n);
    int nbrlen = n > 0 ? arrlen : arrlen - 1;

    new = malloc((arrlen + 1) * sizeof(char));
     i = 0;
    if (!new)
        return (NULL);
    while (i < nbrlen)
    {
        if (n < 0)
        {
            new[0] = '-';
            n *= -1;
        }
        new[arrlen - i - 1] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    new[arrlen + 1] = 0;
    return (new);
}

// int main()
// {
//     printf("%s\n", ft_itoa(10));
//     // printf("%s\n", ft_itoa(2147483647));
   
// }