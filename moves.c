#include "push_swap.h"

void push(t_list **a, t_list **b)
{
    t_list *temp;

    if(*a == NULL)
        return;
    temp = (*a);
    (*a) = (*a)->next;
    if((*b) == NULL)
    {
        temp->next = NULL;
        (*b) = temp;
    }
    else
    {
        temp->next = *b;
        *b = temp;
    }
}

void pb(t_list **a, t_list **b)
{
    push(a, b);
    write(1, "pb\n", 3);
}

void pa(t_list **a, t_list **b)
{
    push(b, a);
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

    if(ft_lstsize(*a) < 2 || !*a)
        return;
    temp = *a;
    *a = (*a)->next;
    temp->next = (*a)->next;
    (*a)->next = temp;
    write(1, "sa\n", 3);
}

void rra(t_list **a)
{
    t_list *temp;
    t_list *last;

    temp = *a;
    last = ft_lstlast(*a);
    if (!last)
        return;
    while(temp->next != last)
        temp = temp->next;
    temp->next = NULL;
    last->next = *a;
    *a = last;
    write(1, "rra\n", 4);
}
