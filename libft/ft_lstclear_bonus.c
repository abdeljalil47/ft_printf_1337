#include "libft.h"

// **lst it means to clear all the list, but if *lst mean clear one element.

void ft_lstclear(t_list **lst, void (*del)(void *));

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!*lst || !del)
        return;
    t_list *node = *lst;
    t_list *node_move;
    while (node)
    {
        node_move = node->next;
        ft_lstdelone(node, del);
        node = node_move;
    }
    *lst = NULL;
}