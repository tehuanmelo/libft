/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:42:45 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/29 11:30:58 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Parameters
**     lst: The node to free.
**     del: The address of the function used to delete
**     the content.
** Return value
**     None
** External functs.
**     free
** Description
**     Takes as a parameter a node and frees the memory of
**     the node’s content using the function ’del’ given
**     as a parameter and free the node. The memory of
**     ’next’ must not be freed.
*/

#include "libft.h"

void *del(void *value)
{
    value = NULL;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

int main()
{
    
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_front(&lst, ft_lstnew("hello"));
    
    ft_lstdelone(&lst, ft_lstlast(lst));

    printf("%s\n", (char*)lst->next->content);
}