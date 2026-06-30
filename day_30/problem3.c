// WAP to create mini employee management system.
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char id[20];
    char department[30];
};

int main() {
    struct Employee employees[100];  
    int count = 0;                   
    int choice;

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf("%s", employees[count].name);
            printf("Enter Employee ID: ");
            scanf("%s", employees[count].id);
            printf("Enter Department: ");
            scanf("%s", employees[count].department);
            count++;
            printf("Employee added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Employee List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Name: %s\n", employees[i].name);
                printf("ID: %s\n", employees[i].id);
                printf("Department: %s\n\n", employees[i].department);
            }
        }
        else if (choice == 3) {
            char searchID[20];
            int found = 0;
            printf("Enter Employee ID to search: ");
            scanf("%s", searchID);

            for (int i = 0; i < count; i++) {
                if (strcmp(searchID, employees[i].id) == 0) {
                    printf("Employee Found!\n");
                    printf("Name: %s\n", employees[i].name);
                    printf("ID: %s\n", employees[i].id);
                    printf("Department: %s\n", employees[i].department);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee not found.\n");
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
/* ---Mini Employee Management System---
  1. Add Employee
  2. Display Employees
  3. Search Employee by ID
  4. Exit
  Enter ypur choice: 1
  Enter Name: xyz
  Enter Employee ID : 767
  Enter Department:def
  Employee added successfully! */