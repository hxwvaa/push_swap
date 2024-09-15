#include "push_swap.h"

void ft_free_array(t_list *lst)
{
    t_list *temp;
    temp = lst;
    while(lst != NULL)
    {
        lst = lst->next;
        free(temp);
        temp = lst;
    }
}

void ft_error(void)
{
    write(2, "Error\n", 6);
    exit(1);
}


// void prin(t_list *lst)
// {
//     while(lst != NULL)
//     {
//         printf("%d, %d | ", lst->content, lst->index);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
//     t_list *lst;

//     lst = ft_lstnew(3, 1);
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     ft_lstadd_back(&lst, ft_lstnew(4, 2));
//     prin(lst);
//     ft_free_array(lst);
// }