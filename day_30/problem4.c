// WAP to Develop complete mini project using arrays,strings and functions.
#include<stdio.h>
#include <string.h>

#define MAX 50  

struct Student {
    int roll;
    char name[30];
    float marks;
};


void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);

int main() {
    struct Student students[MAX];
    int count = 0, choice;

    do {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX) {
        printf("List full!\n");
        return;
    }
    printf("Enter Roll: ");
    scanf("%d", &students[*count].roll);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added!\n");
}


void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students yet.\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n",
               students[i].roll, students[i].name, students[i].marks);
    }
}


void searchStudent(struct Student students[], int count) {
    int roll, found = 0;
    printf("Enter Roll to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Found: Roll: %d | Name: %s | Marks: %.2f\n",
                   students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found!\n");
}
/*---Student Management---
  1.Add Student
  2.Display Students
  3.Search Student
  4. Exit
  Enter choice:2
  No student yet.*/
