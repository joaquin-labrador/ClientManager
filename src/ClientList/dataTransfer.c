//
// Created by Labrix on 28/3/2023.
//

#include "dataTransfer.h"

void addClientToList(Node **head, Client client) {
    FILE *file = openClientFile("rb");

    Client clientAux;

    while (fread(&clientAux, sizeof(Client), 1, file)) {
        addClientToStart(head, clientAux);
    }

    fclose(file);


}