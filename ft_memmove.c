/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:31:57 by tde-melo          #+#    #+#             */
/*   Updated: 2022/07/15 14:07:51 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The ft_memmove() function copies len bytes from string src to 
//		string dst.
//      The two strings may overlap;
//      the copy is always done in a non-destructive manner.
// RETURN VALUES
//      The ft_memmove() function returns the original value of dst.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	tmp[255];

	i = 0;
	while (i < len)
	{
		tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
