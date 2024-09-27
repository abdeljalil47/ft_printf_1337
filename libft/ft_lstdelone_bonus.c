#include "libft.h"

/*
    =- void (*del)(void *) this use to pointed on the function that gonna free the lst->content.
        del(lst->content);= this call the function for delete or free.
        free(lst); after free the content then free the size or the allocation in memorey.
*/

void ft_lstdelone(t_list *lst, void (*del)(void *));

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}