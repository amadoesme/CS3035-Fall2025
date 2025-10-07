/*Created: Sep 30, 2025
 *Student: Esmeralda Amado
 *Description: Making an array to store student information
 */

//importing libraries
#include <stdio.h>
#include <stdlib.h>

//student struct to take student information
struct student{
char name[100]; //storing a max of 100 characters
int age;
float gpa; //works with float
char major[100]; 
}; //need semicolon in the end

//printing the records of the students information
void printFunc(struct student *students, int n){
    for(int i = 0; i < n; i++){
       //print all records students[i].name
       printf("\n--- Student %d ---\n", i + 1);
       printf("Name: %s\n", students[i].name);
       printf("Age: %d\n", students[i].age);
       printf("GPA: %.2f\n", students[i].gpa);
       printf("Major: %s\n", students[i].major);
    }
}
    
//main method
int main(){
    int n = 5; //loop to print info of 5 students
    struct student students[n];
    
    //for loop to get the students information
    for(int i = 0; i < n; i++){
       printf("Name: ");
       scanf("%s", students[i].name);
       //take all 3 variables from the user
       printf("Age: ");
       scanf("%d", &students[i].age);
       printf("GPA: ");
       scanf("%f", &students[i].gpa);
       printf("Major: ");
       scanf("%s", students[i].major);
    }
    
    printFunc(students, n);
    
    
    //return type to make sure the code runs well
    return 0;
}
