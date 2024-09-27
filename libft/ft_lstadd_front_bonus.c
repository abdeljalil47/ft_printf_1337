#include "libft.h"

/*
1/Check if either lst or new is NULL and return if so.
2/Set the next pointer of the new node to the current head of the list.
3/Update the list head to point to the new node, making it the new front of the list
*/

void ft_lstadd_front(t_list **lst, t_list *new);

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
    {
        return;
    }
    new->next = *lst;
    *lst = new;
}