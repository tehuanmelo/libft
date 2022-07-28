/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:32:20 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/28 19:34:46 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parameters
**     lst:
**         The address of a pointer to the first link of
**         a list.
**     new:
**         The address of a pointer to the node to be
**         added to the list.
** Return value
**     None
** External functs.
**     None
** Description
**     Adds the node ’new’ at the beginning of the list.
*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    // if (!lst || !new)
    //     return;
    new->next = *lst;
    *lst = new;
}

// int main()
// {
    
//     t_list *new = ft_lstnew("tehuan");
//     t_list *lst = NULL;
    
//     ft_lstadd_front(&lst, new);

//     printf("%s\n", lst->content);
// }