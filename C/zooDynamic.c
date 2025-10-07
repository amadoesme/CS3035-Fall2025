/*Created: Sep 26, 2025
 *Student: Esmeralda Amado
 *Description: making a zoo with n animals.
 *using malloc() and free(). 
 *Filling in the pseuducode TA gave us.*/
 
//including libraries
#include <stdio.h>
#include <stdlib.h> //in lecture notes it says this is for malloc() and free()

//main function
int main(){

    //int value for n number of zoo animals in database
    int n;
    printf("Enter the capacity of the zoo ");
    scanf("%d", &n); // should be greater than 4 as per mentioned in program defination
    
    //error checking, holding more than just 4 animals
    while (n <= 4) {
    printf("Invalid input. Please enter a value greater than 4: ");
    scanf("%d", &n); // taking value from user again if n is less than 4
    }
    
    //Allocate memory for an array of string pointers (zoo)
    char **zoo = (char **)malloc(n * sizeof(char *));

     zoo[0] = "Monkey";
     zoo[1] = "Tiger";
     zoo[2] = "Gorilla";
     zoo[n - 1] = "Llama";// assign any name

      //apply for loop on zoo and print first 3 animal name. part1 code
      printf("First 3 animals in zoo: \n");
      for(int i = 0; i < 3; i++){
         printf("%s\n", zoo[i]);
      }
      
      //Prints the last animal name -> zoo[n - 1];
      printf("Last animal found in zoo: %s\n", zoo[n-1]);

     //Free the dynamically allocated memory. Because used malloc()
     free(zoo);
     
     //making sure program runs well
     return 0;
}
