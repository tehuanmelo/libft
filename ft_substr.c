/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:36 by tde-melo          #+#    #+#             */
/*   Updated: 2022/07/19 18:20:45 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters 
//     s: The string from which to create the substring.
//     start: The start index of the substring in the
//     string ’s’.
// len: 
//     The maximum length of the substring.
// Return value
//      The substring.
//     NULL if the allocation fails.
// External functs. 
//     malloc
// Description 
//     Allocates (with malloc(3)) and returns a substring
//     from the string ’s’.
//     The substring begins at index ’start’ and is of
//     maximum size ’len’.

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    if (!s)
        return (NULL);
    if (len > strlen(s))
        len = strlen(s);
    if (start >= strlen(s))
        len = 0;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if(!substr)
        return (NULL);
    i = 0;
    while (i < len)
        substr[i++] = s[start++];
    substr[i] = 0;
    return (substr);
}

// int main()
// {
//     char * s = ft_substr("tripouille", 0, 42000);
//     printf("%s\n", s);
//     // printf("%lu\n", strlen(ft_substr(str,100,1)));
// }