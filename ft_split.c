/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:20:42 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/25 02:23:33 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_words(char const *s, char c)
{
    int counter;

    counter = 0;
    while (*s)
    {
        if ((*s == c && (*(s - 1)) != c) 
        || (*s != c && (*(s + 1)) == 0))
            counter++;
        s++;
    }
    return (counter);
}

int ft_strlensplt(char const *s, char c)
{
    int counter;

    counter = 0;
    while (*s)
    {
        if ((*s == c && (*(s - 1)) != c) 
        || (*s != c && (*(s + 1)) == 0) 
        || (*s != c && (*(s + 1)) == c))
        {
            counter++;
            return (counter);
        }
        counter++;
        s++;
    }
    return (counter);
}

char **ft_split(char const *s, char c)
{
    char **new;
    int strwords;
    int wlen;
    int i;
    int j;

    strwords = ft_words(s, c);
    if (!s)
        return (NULL);
    if (!(new = ft_calloc(ft_words(s, c) + 1, (sizeof(char *)))))
        return (NULL);
    i = 0;
    while (i < strwords)
    {
        while (*s == c)
            s++;
        wlen = ft_strlensplt(s, c);
        if (!(new[i] = ft_calloc(wlen + 1, (sizeof(char)))))
        {
            return (NULL);
            free(new);
        }
        j = 0;
        while (j < wlen)
            new[i][j++] = *s++;
        i++; 
    }
    return (new);
}

// int main(int ac, char **av)
// {
//     (void)ac;
//     char **new = ft_split(av[1], ',');
//     while(*new)
//     {
//         printf("%s\n", *new);
//         new++;
//     }

//     return (0);
// }