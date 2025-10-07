/*Created: Sep 17 2024
 *Name: Esmeralda Amado
 *Description: Bookstore management inventory where user can 
 *add and remove books. Then the program keeps updating as long 
 *as the user interacts with the system. If user enters zero
 *porgram will terminate and show them what their final inventory is
 */

//including library
#include <stdio.h>

int main() {

    //adding an initial value to the inventory and to the inventory that will be updated
    int inventory = 0;   
    int updateInventory;         

    //instructions for user to follow the program
    printf("Welcome to Esmeralda's Book Inventory Management System!\n");
    printf("To add books enter a positive number\n");
    printf("To remove books enter a negative number\n");
    printf("To quit the program enter 0\n");

    //creating an infinite loop
    while (1) { 
        printf("Enter number of books to add or remove: ");
        scanf("%d", &updateInventory);

	//checking if user wants to exit the program when they enter 0
        if (updateInventory == 0) {
            printf("Final bookstore inventory: %d books\n", inventory);
            break;  //terminate loop if user enters 0 (searched up in StackOverflow)
        }

        //updating the inventory of books added or removed
        inventory += updateInventory; 
        printf("Current inventory: %d books\n", inventory);
    }

    return 0;
}

/* ----------- CODE OUTPUT ----------------
 *eamado3@eamado3-vm:~/test_directory$ gcc bookstoreManIn.c -o bookstoreManIn
 *eamado3@eamado3-vm:~/test_directory$ ./bookstoreManIn
 *Welcome to Esmeralda's Book Inventory Management System!
 *To add books enter a positive number
 *To remove books enter a negative number
 *To quit the program enter 0
 *Enter number of books to add or remove: 5
 *Current inventory: 5 books
 *Enter number of books to add or remove: -2
 *Current inventory: 3 books
 *Enter number of books to add or remove: 0
 *Final bookstore inventory: 3 books*/


