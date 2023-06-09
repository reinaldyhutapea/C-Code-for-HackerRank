#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_INPUT_LENGTH 100

struct Student {
    char id[10];
    char name[50];
    float gpa;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students = 0;

    char input[MAX_INPUT_LENGTH];
    char *command, *id, *name, *gpa;

    // Loop until the user enters '---'
    while (1) {
        fgets(input, MAX_INPUT_LENGTH, stdin);
        input[strcspn(input, "\r\n")] = 0; // Remove trailing newline

        // Parse the input command and arguments using strtok
        command = strtok(input, "#");
        id = strtok(NULL, "#");
        name = strtok(NULL, "#");
        gpa = strtok(NULL, "#");

        // Check if the user entered '---' to stop
        if (strcmp(command, "---") == 0) {
            break;
        }

        // If the command is 'student-add', add the student to the array
        if (strcmp(command, "student-add") == 0) {
            // Create a new Student object
            struct Student new_student;
            strcpy(new_student.id, id);
            strcpy(new_student.name, name);
            new_student.gpa = atof(gpa);

            // Add the new student to the array
            students[num_students] = new_student;
            num_students++;
        }

        // If the command is 'student-show-all', display all the students
        if (strcmp(command, "student-show-all") == 0) {
            for (int i = 0; i < num_students; i++) {
                printf("%s|%s|%.2f\n", students[i].id, students[i].name, students[i].gpa);
            }
        }
    }

    return 0;
}
