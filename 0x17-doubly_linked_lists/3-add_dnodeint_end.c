#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Memory allocation failed
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        // If the list is empty, make the new node the head
        new_node->prev = NULL;
        *head = new_node;
    } else {
        // Traverse to the last node
        dlistint_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Update pointers to insert new node at the end
        current->next = new_node;
        new_node->prev = current;
    }

    return new_node;
}
