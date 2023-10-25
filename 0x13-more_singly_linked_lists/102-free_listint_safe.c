#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops)
 * @h: A pointer to the head of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *tmp;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current)
    {
        count++;
        tmp = current;
        current = current->next;

        /* Check if we've visited this node before */
        if (tmp->next == tmp)
        {
            /* We've entered a loop; break the loop */
            *h = NULL;
            return (count);
        }

        /* Mark the node as visited */
        tmp->next = tmp;
        free(tmp);
    }

    *h = NULL;
    return (count);
}
