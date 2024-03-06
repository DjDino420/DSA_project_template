//
// Created by user on 3/6/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum {
    MALE,
    FEMALE
} Gender;

typedef struct {
    int year;
    int month;
    int day;
} Date_t;

typedef struct {
    char name[51];
    char neptunCode[9];
    char birthPlace[26];
    Date_t dateOfBirth;
    Gender gender;
    float examResult;
} Student_t;


void readStudentDetails(Student_t *pStudent) {
    printf("Enter name: ");
    scanf("%50s", pStudent->name);  // Use %50s to prevent buffer overflow

    printf("Enter Neptun Code: ");
    scanf("%8s", pStudent->neptunCode);

    printf("Enter birth place: ");
    scanf("%25s", pStudent->birthPlace);

    printf("Enter year of birth: ");
    scanf("%d", &pStudent->dateOfBirth.year);

    printf("Enter month of birth: ");
    scanf("%d", &pStudent->dateOfBirth.month);

    printf("Enter day of birth: ");
    scanf("%d", &pStudent->dateOfBirth.day);

    printf("Enter gender (0 for MALE, 1 for FEMALE): ");
    int genderInput;
    scanf("%d", &genderInput);

    pStudent->gender = (genderInput == 0) ? MALE : FEMALE;

    printf("Enter Exam Result: ");
    scanf("%f", &pStudent->examResult);
}
void printStudent(const Student_t *student) {
    printf("Name: %s\n", student->name);
    printf("Neptun code: %s\n", student->neptunCode);
    printf("Birth place: %s\n", student->birthPlace);
    printf("Date of Birth: %d/%02i/%02i\n", student->dateOfBirth.year, student->dateOfBirth.month, student->dateOfBirth.day);

    printf("Gender: %s\n", (student->gender == MALE) ? "MALE" : "FEMALE");

    printf("Exam Result: %.2f\n", student->examResult);
}


float calculateAverage(float *grades, int numGrades) {
    float sum = 0.0;

    for (int i = 0; i < numGrades; ++i) {
        sum += grades[i];
    }

    return numGrades > 0 ? sum / numGrades : 0.0;
}


void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents = (int *)malloc(numberOfStudents * sizeof(int));
    if (*dpStudents == NULL) {
        printf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    else
        printf("memory allocated");
}
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents) {
    allocateMemoryForStudents(dpStudents, *numberOfStudents);
    for (int i = 0; i < *numberOfStudents; ++i) {
        readStudentDetails(&(*dpStudents)[i]);
    }
}


