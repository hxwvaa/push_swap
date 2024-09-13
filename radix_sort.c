#include "push_swap.h"

void push_back(t_list **a, t_list **b)
{
    while(*b != NULL)
        pa(a, b);
}

void radix(t_list *a, t_list *b, int size)
{
    int max_len;
    int bit_len;
    int i;
    int j;

    i = 0;
    bit_len = 0;
    max_len = size - 1;
    while((max_len >> bit_len) != 0)
        bit_len++;
    while(i < bit_len)
    {
        j = 0;
        while(j < size)
        {
            if ((a->index >> i) & 1)
                ra(&a);
            else
                pb(&a, &b);
            j++;
        }
        push_back(&a, &b);
        i++;
    }
}

void sort(t_list *a, t_list *b)
{
    int size;

    size = ft_lstsize(a);
    if (size == 2)
        sa(&a);
    else if (size == 3)
        three_sort(a, b, size);
    else if (size == 4)
        four_sort(a, b, size);
    else if (size == 5)
        five_sort(a, b, size);
    else
        radix(a, b, size);
}