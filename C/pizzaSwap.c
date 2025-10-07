/*Created: Sep 25, 2025
 *Student: Esmeralda Amado
 *Description: fixing error in a pizza parlor by swapping numbers*/
 
//declare library
#include<stdio.h>

//swap function with pointers and swapping numbers with third values
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
    
//main function 
int main(void){
    int x = 11;
    int y = 12;
    
    //printing before swap
    printf("X and Y values before swapping: \n");
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    
    //doing the swap
    swap(&x, &y);
    
    //printing values after the swap
    printf("X and Y values after swapping: \n");
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    
    //making sure my code has no errors
    return 0;
}
