/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:02:55 by tde-melo          #+#    #+#             */
/*   Updated: 2022/08/01 20:04:45 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters
//     lst: The address of a pointer to a node.
//     f: The address of the function used to iterate on
//     the list.
//     del: The address of the function used to delete
//     the content of a node if needed.
// Return value
//     The new list.
//     NULL if the allocation fails.
// External functs.
//     malloc, free
// Description
//     Iterates the list ’lst’ and applies the function
//     ’f’ on the content of each node. Creates a new
//     list resulting of the successive applications of
//     the function ’f’. The ’del’ function is used to
//     delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst)//, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (!(lst))// || f || del))
		return (NULL);
	head = ft_lstnew(lst->content);
	tmp = head;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(lst->content);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (head);
}

int main()
{
    t_list *lst = ft_lstnew("hello");
    ft_lstadd_back(&lst, ft_lstnew("world"));
    t_list *new = ft_lstmap(lst);

    while(new)
    {
        printf("%s", new->content);
        new = new->next;
    }

}
