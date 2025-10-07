/* Student: Esmeralda Amado,
* Written on Sep 2, 2025,
* writting a c program to determine if a user
* input number is even or odd. */

//importing preprocessor
#include<stdio.h>

//starting code
int main (void)
{ 
   int intNum; //number that user will enter
   int module; //using later
   
   printf("Input a number to determine if it's even or odd\n"); //prompt user to enter integer
   scanf("%d", &intNum );
   
   //checking if user input is even or odd
   module = intNum % 2;
   
   //making the program print if the number is even or odd
   if(module == 0){
     printf("%d is an even number\n", intNum);
   }
   else{
     printf("%d is an odd number\n", intNum);
   }
 
   //printing the answer
   printf("The number is %d\n", module);
   
   return 0;
}


