#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *content;
    t_list *head;
    void *element;

    head = NULL;
    if (!lst || !f || !del)
        return 0;
    while (lst)
    {
        element = f(lst->content);
        content = ft_lstnew(element);
        if (!content)
        {
            ft_lstclear(&head, (*del));
            return NULL;
        }
        ft_lstadd_back(&head, content);
        lst = lst->next;
    }
    return head;
}
/*  content like this first
    c 5
    n null
*/