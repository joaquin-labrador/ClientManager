//
// Created by Labrix on 26/3/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "client.h" // Include the client.h file


#ifndef UNTITLED3_CLIENTLIST_H
#define UNTITLED3_CLIENTLIST_H

typedef struct Node {
    Client data;
    struct Node *next;
} Node;

// Prototypes functions

Node *createNode(Client client);


void addClientToList(Node **head, Client client);


void sortListByName(Node **list);


#endif //UNTITLED3_CLIENTLIST_H
