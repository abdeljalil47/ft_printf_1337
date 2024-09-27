#include "libft.h"

/*
    =- void * it use accepte and pointed any type of data was pasd fron the param.
    =- struct s_list * is a pointer to another node of the same type, This member is used to link the current node to the next node in the linked list.
*/

t_list *ft_lstnew(void *content);

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (new)
    {
        new->content = content;
        new->next = NULL;
    }
    return new;
}

// int main() {
//     int data = 42;
//     t_list *node = ft_lstnew(&data);

//    int *value = (int *)(node->content);
//    printf("Node content: %d\n", *value);
        
//     return 0;
// }