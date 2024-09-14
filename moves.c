#include "push_swap.h"

void pb(t_list **a, t_list **b)
{
    t_list *temp;

    if(*a == NULL)
        return;
    temp = (*a);
    (*a) = temp->next;
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
    write(1, "pb\n", 3);
}

void pa(t_list **a, t_list **b)
{
    t_list *temp;

    if(*b == NULL)
        return;
    temp = (*b);
    (*b) = temp->next;
    if((*a) == NULL)
    {
        temp->next = NULL;
        (*a) = temp;
    }
    else
    {
        temp->next = *a;
        *a = temp;
    }
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
    write(1, "sa\n", 3);
}

void rra(t_list **a)
{
    t_list *temp;
    t_list *last;

    temp = *a;
    last = ft_lstlast(*a);
    while(temp->next != last)
        temp = temp->next;
    temp->next = NULL;
    last->next = *a;
    *a = last;
    write(1, "rra\n", 4);
}
