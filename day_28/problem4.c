// WAP to create contact management system

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[50];  
    int count = 0;                
    int choice;
    char searchName[50];

    do {
        printf("\n1. Add Contact\n");
        printf("2. Show Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter name: ");
            scanf("%s", contacts[count].name);
            printf("Enter phone: ");
            scanf("%s", contacts[count].phone);
            count++;
        }
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
            }
        }
        else if (choice == 3) {
            printf("Enter name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(searchName, contacts[i].name) == 0) {
                    printf("Found! Phone: %s\n", contacts[i].phone);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Not found.\n");
            }
        }
    } while (choice != 4);

    return 0;
}
/* 1. Add Contact
   2. Show Contacts
   3. Search Contact
   4.Exit
   Enter choice:1
   Enter name:priya
   Enter phone:637653475*/


