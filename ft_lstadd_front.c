/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:32:20 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/07/28 12:16:15 by tehuanmelo       ###   ########.fr       */
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
    new->next = *lst;
    *lst = new;
}

int main()
{
    char *str1 = "hello";
    char *str2 = "world";
    t_list **lst;
    *lst = ft_lstnew(str2);
    t_list *new = ft_lstnew(str1);

    ft_lstadd_front(lst, new);

    printf("%s\n", (*lst)->content);
}