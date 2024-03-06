//
// Created by user on 3/6/2024.
//

#ifndef LAB_03_STUDENT_H
#define LAB_03_STUDENT_H
typedef enum {
    MALE,
    FEMALE
} Gender;

typedef struct {
    int yearOfBirth;
} Date_t;

typedef struct {
    char name[51];
    char neptunCode[9];
    char birthPlace[26];
    Date_t dateOfBirth;
    Gender gender;
    float examResult;
} Student_t;

void readStudentDetails(Student_t *pStudent);
void printStudent(const Student_t *student);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents);
float calculateAverage(float *grades, int numGrades);
#endif //LAB_03_STUDENT_H
