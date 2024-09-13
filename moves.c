#include "push_swap.h"

void pb(t_list **a, t_list **b)
{
    t_list *temp;

    if (!a || !*a)
    return;
    temp = *a;
    ft_lstadd_front(b, ft_lstnew(temp->content, temp->index));
    *a = temp->next;
    free(temp);
    write(1, "pb\n", 3);
}

void pa(t_list **a, t_list **b)
{
    t_list *temp;

    if (!b || !*b)
        return;
    temp = *b;
    ft_lstadd_front(a, ft_lstnew(temp->content, temp->index));
    *b = temp->next;
    free(temp);
    write(1, "pa\n", 3);
}

void ra(t_list **a)
{
    t_list *temp;
    t_list *first;

    if (ft_lstsize(*a) == 1 || !*a)
        return;
    temp = ft_lstlast(*a);
    first = *a;
    temp->next = first;
    *a = first->next;
    first->next = NULL;
    write(1, "ra\n", 3);
}

void sa(t_list **a)
{
    t_list *temp;

    if(ft_lstsize(*a) == 1 || !*a)
        return;
    temp = *a;
    *a = temp->next;
    (*a)->next = temp;
    temp->next = NULL;
}

void rra(t_list **a)
{
    
}