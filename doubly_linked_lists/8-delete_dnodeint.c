#include "lists.h"
#include <stdlib.h>

/**
 * D_D_A_I - supprime le nœud à l'index demandé liste dlistint_t
 * @head: pointeur vers le début de la liste
 * @index: index du nœud à supprimer
 *
 * Retour: 1 si la suppression a réussi, -1 si elle a échoué
 */

 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);

	return (1);
}
