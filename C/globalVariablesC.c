/* Creating a C program that has two global variables and then
 * takes the percentajes.
 * Name: Esmeralda Amado*/
 
//starting my code by adding a library
#include <stdio.h>

//declaring the variables. will use to answer question 4
int A = 2;
int B = 4;

//constant variables. will use to answer question 5
//submitting this as a comment since I'm showing how I ran when testing for question 4
//const int A = 2;
//const int B = 4;

//checking the percentage
float whatPercentage(){
     return ((float) A / B) * 100.0f;
}

//main method to do the rest of the code (c block)
int main(){
    
    //calling the what percentage function to print the variable
    float percen1 = whatPercentage();
    printf("This is the percentage of A and B %f\n", percen1);
    
    //updating the new A and B values
    A = 5;
    B = 10;
    
    //calling the what percentage function to print the new variables
    float percen2 = whatPercentage();
    printf("This is the new percentage of A and B %f\n", percen2);
    
    //adding comments for the 4th question
    /*The answers I got in the terminal are both 50.000000. This is because even after changing
     *the A and B value, the ratio did not change. It used the global variable. */
     
    /*When running my code I got an error. This is caused because of the const keyword.
     *This caused a compile time error */
    
return 0;

}


