#include "libft.h"

/*
    =- lst = lst->next; move to the next list.
*/

int ft_lstsize(t_list *lst);

int ft_lstsize(t_list *lst){
    if (!lst)
        return 0;
    int i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return i;
}