//
// Created by Labrix on 26/3/2023.
//

#include "clientList.h"


Node *createNode(Client client) {
    Node *node = (Node *) malloc(sizeof(Node)); // Allocate memory for the node (dynamic)
    node->data = client;
    node->next = NULL;
    return node;
}


void addClientToStart(Node **list, Client client) {
    Node *node = createNode(client);
    node->next = *list;
    *list = node;
}

void sortListByName(Node **list) { // Bubble sort (is not the best way to sort a list)
    Node *current = *list;
    Node *index = NULL;
    Client temp;

    if (*list == NULL) {
        return; // If the list is empty, return
    } else {
        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (strcmp(current->data.name, index->data.name) > 0) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}