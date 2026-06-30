// WAP to create menu-driven string operating system.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Concatenate Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Length
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string = %d\n", (int)strlen(str1));
                break;

            case 2: // Copy
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3: // Compare
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4: // Concatenate
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string = %s\n", result);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

/*---Menu Driven String Operations---
  1. Find length of string
  2. Copy String
  3. Compare Strings
  4.Concatenate strings
  5.Exit
  Enter your choice:2
  Enter a string: abc
  Copied string = abc 
  */