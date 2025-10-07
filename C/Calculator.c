/*Class: CS 3035 - 03
 *Date: September 11 2025
 *Student: Esmeralda Amado
 *Description: Creating a python program were a calculator
 *has four functions; add, subtract, multiply and divide.*/
 
 
 //starting my code
 #include <stdio.h> 
 
 //functions for adding, subtracting, multiplying and dividing
 //adding function
 int add(int x, int y, int z){
     return x + y + z;
}

//subtracting function
int subtract(int x, int y, int z){
    return z - y - x;
}

//multiplying function
int multiply(int x, int y){
    return x * y;
}

//dividing function
float divide(float x, float y){
    if (y == 0){
       printf("ZeroDivisionError!\n");
       return 0;
    }
    return x / y;
}
 
//main function where it checks for the numbers and does computation
int main(){
  
    //declaring the values that make the calculator work
    int x;
    int y;
    int z;
    
    //user input to enter three numbers
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    printf("Enter your last number: ");
    scanf("%d", &z);
    
    //using the expression in the prompt to be able to divide
    int topDividend = multiply(add(x, y, z), x);
    int bottomDividend = multiply(subtract(x, y, z), y);
    
    //checking to see that the bottom dividend is not being divided by zero
    if(bottomDividend == 0){
       printf("You can't divide by zero\n");
    }
    else{
       float answer = divide(topDividend, bottomDividend);
       printf("The answer is:  %.2f\n", answer);
    }
    
return 0;
}

/* ------ OUTPUT -------
 *eamado3@eamado3-vm:~/test_directory$ gcc Calculator.c
 *eamado3@eamado3-vm:~/test_directory$ ./a.out
 *Enter a number: 10
 *Enter another number: 5
 *Enter your last number: 3
 *The answer is:  -3.00
 *eamado3@eamado3-vm:~/test_directory$ ./a.out
 *Enter a number: 7
 *Enter another number: 0
 *Enter your last number: 1
 *You can't divide by zero*/

