//
// Created by Labrix on 25/3/2023.
//
#include "client.h"

const int MAX_CHARACTERS_NAME = 50;
const int MAX_CHARACTERS_ADDRESS = 100;
const int MAX_CHARACTERS_DNI = 10;


Client createClient() {
    Client client;

    fflush(stdin);
    printf("Enter the name: ");
    fgets(client.name, MAX_CHARACTERS_NAME, stdin);

    printf("Enter the dni: ");
    fgets(client.dni, MAX_CHARACTERS_DNI, stdin);

    printf("Enter the age: ");
    scanf("%d", &client.age);

    fflush(stdin);

    printf("Enter the address: ");
    fgets(client.address, MAX_CHARACTERS_ADDRESS, stdin);


    return client;
}


void saveClient() {
    Client client = createClient();

    FILE *file = openClientFile("ab");

    fwrite(&client, sizeof(Client), 1, file);

    fclose(file);
}

bool verifyClient(char *dni) {
    FILE *file = openClientFile("rb");

    Client client;

    while (fread(&client, sizeof(Client), 1, file)) {
        if (strcmp(client.dni, dni) == 0) {
            fclose(file);
            return true;
        }
    }

    fclose(file);
    return false;
}

void showAllClients() {
    FILE *file = openClientFile("rb");

    printf("Quantity of clients: %d\n", quantityClients());

    Client client;

    while (fread(&client, sizeof(Client), 1, file)) {
        printClient(client);
    }

    fclose(file);
}

void printClient(Client client) {
    printf("***** Client *****\n");
    printf("Name : %s\n", client.name);
    printf("DNI : %s\n", client.dni);
    printf("Age : %d\n", client.age);
    printf("Address : %s\n", client.address);
    printf("****************\n");

}

int quantityClients() {
    FILE *file = openClientFile("rb");

    fseek(file, 0, SEEK_END);
    long int size = ftell(file);
    int quantity = size / sizeof(Client);

    fclose(file);

    return quantity;
}

FILE *openClientFile(char *mode) {
    FILE *file = fopen(FILE_CLIENT_NAME, mode);

    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    } else {
        printf("File opened successfully\n");
    }
    return file;
}