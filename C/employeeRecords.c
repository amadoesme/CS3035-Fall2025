/*Created: October 2, 2025
 *Student: Esmeralda Amado
 *Description: using an array of structure for employees
 *NOTE: undertand code so i can understand checkpoint
 */
 
//importing libraries
#include <stdio.h>
#include<stdlib.h>
#include <string.h> //new library for the structs/pointers

//making a strcuture for employee
struct Employee{
   char name[50];
   int age;
   float salary;
   char department[50];
};

//function to update salary using call by reference
void updateSalary(struct Employee *e, double raise){
    e->salary += raise;
}

//main function
int main(){
   struct Employee employees[5];
   struct Employee *ptr = employees;
   int n = 0;
   int i = 0;
   int id = 0;
   double newAmount = 0;
   
   //get number of employees from user and store in n=4
   printf("Enter number of employees (maximum of 5): ");
   scanf("%d", &n);
   
   //input employee details
   for (i = 0; i < n; i++){
      printf("Name: ");
      scanf(" %49s", (ptr + i) -> name);
      printf("Age: ");
      scanf(" %d", &(ptr + i) -> age);
      printf("Salary: ");
      scanf(" %f", &(ptr + i) -> salary);
      printf("Department: ");
      scanf(" %49s", (ptr + i) -> department);
   }
   
   //print all records with emp. id (consider id as index)
   printf("Records of the employee\n");
   for(i = 0; i < n; i++){
      printf("ID %d:\n", i);
      printf("Name: %s\n", (ptr + i) -> name);
      printf("Age: %d\n", (ptr + i) -> age);
      printf("Salary: %.2f\n", (ptr + i) -> salary);
      printf("Department: %s\n", (ptr + i) -> department);
   }
   
   //salary update
   //get employee id and new amount from user
   printf("Enter employees ID number to update the salary: ");
   scanf("%d", &id);
   printf("Enter desired amount: ");
   scanf("%lf", &newAmount);
   
   
   //call by reference by using pointer arithmetic
   updateSalary(ptr + id, newAmount);
   
   //print all records with raised salary
   for(i = 0; i < n; i++){
      printf("ID %d:\n", i);
      printf("Name: %s\n", (ptr + i) -> name);
      printf("Age: %d\n", (ptr + i) -> age);
      printf("Salary: %.2f\n", (ptr + i) -> salary);
      printf("Department: %s\n", (ptr + i) -> department);
   }
   return 0;
}

