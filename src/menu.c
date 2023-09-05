#include <stdio.h>
#include <stdbool.h>
#include "menu.h"

void menu() {
    int choice;
    bool continueMenu = true; // Initialize to true to start the loop

    while (continueMenu) {
        printf("Welcome\nChoose an option:\n1. Option 1\n2. Option 2\n3. Option 3\n4. Exit\n");

        // Check if scanf successfully read an integer
        if (scanf("%d", &choice) != true) {
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue; // Skip the rest of the loop and ask for user input
        }

        switch (choice) {
            case 1:
                printf("Learn C++ Programming and Game Development\n");
                break;
            case 2:
                printf("Learn C Programming and Hardware\n");
                break;
            case 3:
                printf("Learn C# Programming and Game Development\n");
                break;
            case 4:
                continueMenu = false; // Exit the loop
                break;
        }
    }
}