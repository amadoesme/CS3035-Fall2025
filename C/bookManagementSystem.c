/*Created: Oct 2 2025
 *Student: Esmeralda Amado
 *Description: Library database that has a simple
 *book management system
 *Comments: I based this code on previous lab
 *employeeRecords.c, StackOverflow and help from grad student
 */

//including libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //used for structs and pointers

//struct for the books in library
struct booksInLib{
    char title[50];
    char author[50];
    int yearPublished;
};

//function to add more books
void addBook(struct booksInLib* books, int* count){
    printf("Title: ");
    scanf(" %49[^\n]", books[*count].title); //%49 because i put that the char is [50]
    printf("Author: ");
    scanf(" %49[^\n]", books[*count].author);
    printf("Year Published: ");
    scanf("%d", &books[*count].yearPublished);
    (*count)++; //adding the book to the inventory
}

//function to show all books
void seeBooks(struct booksInLib* books, int count){
    for(int i = 0; i < count; i++){
        printf("title: %s\n", books[i].title);
        printf("author: %s\n", books[i].author);
        printf("yearPublished: %d\n", books[i].yearPublished);
    }
}

//main function
int main(){
    int count = 0;
    int choice = 0;
    int maxBooks = 5; //how many books the inventory can store
    struct booksInLib* books = malloc(maxBooks * sizeof *books); //malloc used here

    //classmate said my code needed this for memory allocation
    if(!books){
        printf("Memory allocation failed.\n");
        return 1;
    }

    //user choosing if they want to add a book or see inventory
    while(1){ //i asked a grad student in the ASME club im in and he told me to add the 
              //number 1 inside the parenthesis becuase I was making an infinite loop
        printf("\n- Add a book (1)\n");
        printf("- See books (2)\n");
        printf("Enter 1, 2 or 3 based on last options: ");
        scanf("%d", &choice);

        if(choice == 1){
            if(count >= maxBooks){
                printf("Inventory is full\n");
            } 
            else{
                addBook(books, &count);
            }
        } 
        else if(choice == 2){
            seeBooks(books, count);
        } 
    }

    //freeing memory after using malloc
    free(books);

    //making sure program runs well
    return 0;
}

/*-------OUTPUT----------
 *eamado3@eamado3-vm:~/test_directory$ gcc bookManagementSystem.c -o bookManagementSystem
 *eamado3@eamado3-vm:~/test_directory$ ./bookManagementSystem

 *- Add a book (1)
 *- See books (2)
 *Enter 1, 2 or 3 based on last options: 1
 *Title: Seals are cool
 *Author: Esme
 *Year Published: 2025

 *- Add a book (1)
 *- See books (2)
 *Enter 1, 2 or 3 based on last options: 1
 *Title: Harry Potter
 *Author: JK Rowling
 *Year Published: 2000

 *- Add a book (1)
 *- See books (2)
 *Enter 1, 2 or 3 based on last options: 1
 *Title: Pandas in python
 *Author: developer
 *Year Published: 201

 *- Add a book (1)
 *- See books (2)
 *Enter 1, 2 or 3 based on last options: 2
 *title: Seals are cool
 *author: Esme
 *yearPublished: 2025
 *title: Harry Potter
 *author: JK Rowling
 *yearPublished: 2000
 *title: Pandas in python
 *author: developer
 *yearPublished: 201

 *- Add a book (1)
 *- See books (2)
 *Enter 1, 2 or 3 based on last options: 
 */

