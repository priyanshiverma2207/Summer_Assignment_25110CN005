// WAP to create mini library system.

#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[30];
    char isbn[20];
};

int main() {
    struct Book library[100];  
    int count = 0;             
    int choice;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ISBN\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Title: ");
            scanf("%s", library[count].title);
            printf("Enter Author: ");
            scanf("%s", library[count].author);
            printf("Enter ISBN: ");
            scanf("%s", library[count].isbn);
            count++;
            printf("Book added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Title: %s\n", library[i].title);
                printf("Author: %s\n", library[i].author);
                printf("ISBN: %s\n\n", library[i].isbn);
            }
        }
        else if (choice == 3) {
            char searchISBN[20];
            int found = 0;
            printf("Enter ISBN to search: ");
            scanf("%s", searchISBN);

            for (int i = 0; i < count; i++) {
                if (strcmp(searchISBN, library[i].isbn) == 0) {
                    printf("Book Found!\n");
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("ISBN: %s\n", library[i].isbn);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
        }
        else if (choice == 4) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
/*---Mini Library System---
  1. Add Book 
  2. Display Books
  3. Search Book by ISBN
  4.Exit
  Enter your choice:1
  Enter Title: box
  Enter Author:xyz
  Enter ISBN : 665
  Book added successfully!*/