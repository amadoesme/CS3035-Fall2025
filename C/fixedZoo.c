/*Created: Sep 26, 2025
 *Student: Esmeralda Amado
 *Description: making a zoo with 5 animals. 
  Filling in the pseuducode TA gave us.*/
  
//importing the library 
#include <stdio.h>

//main function
int main(){
    char *zoo[5]; //array of 5 animals

    //fill array with values
    zoo[0] = "Zebra";
    zoo[1] = "Lion";
    zoo[2] = "Elephant";
    zoo[3] = "Kangaroo"; //additional 2 animals
    zoo[4] = "Alligator";


    // print all names with zoo[i]
    for (int i = 0 ; i < 5 ; i++) {
        printf("%s\n", zoo[i]);
    }
   
    //making sure program has no errors
    return 0;
}
