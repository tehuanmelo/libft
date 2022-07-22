// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <stdio.h>
#include <stdlib.h>

int ft_words(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str == 32 || (*str >= 9 && *str <= 13))
            str++;
        if (*str)
            count++;
        while (*str && !(*str == 32 || (*str >= 9 && *str <= 13)))
            str++;
    }
    return count;
}

int ft_wordlen(char *str)
{
    int count = 0;
    while (*str && !(*str == ' ' || (*str >= 9 && *str <= 13)))
    {
        count++;
        str++;
    }
    return count;
}

char **ft_split(char *str)
{
    char **new;
    int i = 0, j = 0, wlen;
    int len = ft_words(str);

    new = malloc(sizeof(char *) * (len + 1));
    if (!new)
        return NULL;

    while (i < len)
    {

        while (*str == 32 || (*str >= 9 && *str <= 13))
            str++;

        wlen = ft_wordlen(str);
        j = 0;

        new[i] = malloc(sizeof(char) * wlen + 1);
        if (!new[i])
            return NULL;

        while (j < wlen)
        {
            new[i][j] = *str;
            str++;
            j++;
        }

        new[i][j] = '\0';
        i++;
    }

    new[i] = 0;

    return new;
}

// int main(int ac, char **av)
// {
//     (void)ac;
//     char **new = ft_split(av[1]);
//     while(*new)
//     {
//         printf("%s\n", *new);
//         new++;
//     }

//     return 0;
// }
