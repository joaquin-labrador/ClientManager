#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define FILE_CLIENT_NAME "client.bin"

typedef struct Client {
    char name[50];
    int age;
    char address[100];
    char dni[10];
} Client;

// list data

typedef struct Node {
    Client client;
    struct Node *next;
} Node;

// Prototypes functions
void saveClient();

Client createClient();

bool verifyClient(char *dni);

void showAllClients();

void printClient(Client client);

int quantityClients();

FILE *openClientFile(char *mode);

void insertClientInListSortByName(Node **node, Client client);

Node *createNode(Client client);


int createListOfClient(Node **node);

void showAllClientsFromList(Node *node);