/* Creating a program that checks if an integer is a palindrome.
 * Name: Esmeralda Amado */
 
#include <stdio.h>

//function to check if its a palindrome
int isPalindrome(int n){
    int number = n;
    int reversedNumber = 0;
    int lastDigit;
    
    //TA helped checking for the reverse number
    while(n != 0){
	lastDigit = n % 10;
	reversedNumber = reversedNumber * 10 + lastDigit;
	n = n / 10;
    }
    
    //returning the value if its true
    return (number == reversedNumber);
}    
    
//main method to output if its a palindrome    
int main(){
     int finalNum;

     //user inputs a number
     printf("Enter a number to check if its a palindrome: \n");
     scanf("%d", &finalNum);

     //need if else statement to output if the number is a palindrome
     if(isPalindrome(finalNum)){
	printf("%d is a palindrome\n", finalNum);
     }
     else{
     	printf("%d is not a palindrome\n", finalNum);
     }
     
//returning to see if the the program works correctly     
return 0;
}
    


