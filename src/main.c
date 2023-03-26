#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "../ClientList/client.h"


int main() {

    int menuOption;

    do {
        menu();
        printf("Enter your option: ");
        scanf("%d", &menuOption);

        switch (menuOption) {
            case 1:
                printf("Add a new client\n");
                saveClient();
                break;
            case 2:
                printf("Delete a client\n");
                break;
            case 3:
                printf("Search for a client\n");
                break;
            case 4:
                showAllClients();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (menuOption != 5);


    return 0;
}


void menu() {
    printf("1. Add a new client\n");
    printf("2. Delete a client\n");
    printf("3. Search for a client\n");
    printf("4. Print all clients\n");
    printf("5. Exit\n");
}

