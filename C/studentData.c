/*Created: Oct 6 2025
 *Student: Esmeralda Amado
 *Description: dynamic allocating memory to manage student data
 *Comments: I based myself on previous labs with students and 
 *the first homwork problem
 */

//importing libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct for student data
struct Student {
    char name[50];
    int grade;
};

//main function
int main() {
    int numStudents;
    struct Student* students;

    //asking user for number of students
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    //allocate memory for student array
    students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    //adding student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", (students + i)->name); //%49 because char is [50]
        printf("Grade: ");
        scanf("%d", &(students + i)->grade);
    }

    //showing student details
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf(" Name: %s\n", (students + i)->name);
        printf(" Grade: %d\n", (students + i)->grade);
    }

    //free allocated memory
    free(students);
    
    //making sure program runs well
    return 0;
}

/*--------OUTPUT----------
 *eamado3@eamado3-vm:~/test_directory$ gcc studentData.c -o studentData
 *eamado3@eamado3-vm:~/test_directory$ ./studentData
 *Enter number of students: 4

 *Student 1
 *Name: Esme
 *Grade: 10

 *Student 2
 *Name: Ash
 *Grade: 9

 *Student 3
 *Name: Aisha
 *Grade: 8

 *Student 4
 *Name: Lesly
 *Grade: 7
 *Student 1:
 *Name: Esme
 *Grade: 10
 *Student 2:
 *Name: Ash
 *Grade: 9
 *Student 3:
 *Name: Aisha
 *Grade: 8
 *Student 4:
 *Name: Lesly
 *Grade: 7
 */
