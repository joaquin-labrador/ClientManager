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

// Prototypes functions
void saveClient();

Client createClient();

bool verifyClient(char *dni);

void showAllClients();

void printClient(Client client);

int quantityClients();

FILE *openClientFile(char *mode);