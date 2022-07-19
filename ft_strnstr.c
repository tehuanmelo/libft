/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:27:48 by tde-melo          #+#    #+#             */
/*   Updated: 2022/07/19 11:59:23 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The strnstr() function locates the first occurrence of the
// 		null-terminated string needle in the string haystack, where not more
// 		than len characters are searched.
// 		Characters that appear after a `\0' character are not searched.
// 		Since the strnstr() function is a FreeBSD spe-cific API, it should
// 		only be used when portability is not a concern.
// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs
// 		nowhere in haystack, NULL is returned; otherwise a pointer to the
//      first character of the first occurrence of needle is returned.

#include "libft.h"

// size_t check(char *haystack, char *needle, size_t len)
// {
// 	size_t i;
// 	size_t match;

// 	i = 0;
// 	while (needle[i] && i < len)
// 	{
// 		if (needle[i] == haystack[i])
// 			match++;
// 		i++;
// 	}
// 	return (match);
// }

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t match;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (*haystack && i < len)
	{
		j = 0;
		match = 0;
		if (*haystack == *needle)
		{
			// match = check(haystack, needle, len - i);
			while (needle[j] && j < len - i)
			{
				if (needle[j] == haystack[j])
					match++;
				j++;
			}
			if (match == ft_strlen(needle))
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "cd";
// 	char * empty = (char*)"";
// 	printf("%s\n", ft_strnstr(haystack, "cd", 8));

// }