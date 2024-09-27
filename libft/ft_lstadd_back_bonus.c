#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new);

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node = *lst;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    while (node->next != NULL)
    {
        node = node->next;
    }
    node->next = new;
    new->next = NULL;
}