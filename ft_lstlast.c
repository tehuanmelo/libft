/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:21:26 by tde-melo          #+#    #+#             */
/*   Updated: 2022/07/28 19:42:07 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters 
//     lst: The beginning of the list.
// Return value 
//     Last node of the list
// External functs. 
//     None
// Description 
//     Returns the last node of the list.

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *new;

    new = lst;

    while (new)
    {
        if (new->next == NULL)
            return (new);
        new = new->next;
    }
    return (lst);
}

// int main()
// {
//     t_list *lst = NULL;
//     t_list *new = ft_lstnew("hello");
//     ft_lstadd_front(&lst, new);
//     t_list *new1 = ft_lstnew("world");
//     ft_lstadd_front(&lst, new1);
//     t_list *new2 = ft_lstnew("tehuen");
//     ft_lstadd_front(&lst, new2);

//     t_list *aux = ft_lstlast(lst);

//     printf("%s\n", aux->content);
//     // printf("%s\n", lst->next->content);

// }