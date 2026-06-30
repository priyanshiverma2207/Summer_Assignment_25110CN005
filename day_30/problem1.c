// WAP to create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char rollNo[20];
    char course[30];
};

int main() {
    struct Student students[100];  
    int count = 0;                 
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf("%s", students[count].name);
            printf("Enter Roll No: ");
            scanf("%s", students[count].rollNo);
            printf("Enter Course: ");
            scanf("%s", students[count].course);
            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Name: %s\n", students[i].name);
                printf("Roll No: %s\n", students[i].rollNo);
                printf("Course: %s\n\n", students[i].course);
            }
        }
        else if (choice == 3) {
            char searchRoll[20];
            int found = 0;
            printf("Enter Roll No to search: ");
            scanf("%s", searchRoll);

            for (int i = 0; i < count; i++) {
                if (strcmp(searchRoll, students[i].rollNo) == 0) {
                    printf("Student Found!\n");
                    printf("Name: %s\n", students[i].name);
                    printf("Roll No: %s\n", students[i].rollNo);
                    printf("Course: %s\n", students[i].course);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Student not found.\n");
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
/*--- Student Record System ---
  1. Add Student
  2. Display Students
  3. Search Student by Roll No
  4. Exit
  Enter your choice:1
  Enter Name:priya
  Enter Roll No:6
  Enter Course:btech
  Student added successfully! */
