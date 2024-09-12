#include "push_swap.h"

void pb(t_list **a, t_list **b)
{
    t_list *temp;

    temp = *a;
    ft_lstadd_front(b, ft_lstnew(temp->content, temp->index));
    *a = temp->next;
    free(temp);
    write(1, "pb\n", 3);
}

void pa(t_list **a, t_list **b)
{
    t_list *temp;

    temp = *b;
    ft_lstadd_front(a, ft_lstnew(temp->content, temp->index));
    *b = temp->next;
    free(temp);
    write(1, "pa\n", 3);
}

void ra(t_list **a)
{
    t_list *temp;

    temp = ft_lstlast(*a);
    temp->next = *a;
    *a = 

}