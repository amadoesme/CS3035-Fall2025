/*Created: Oct 3 2025
 *Student: Esmeralda Amado
 *Description: learning how to use dynamic memory location.
 *Comments: The way I kind of thought of this code was like a vector 
 *in linear algebra. Also the matrices being malloc and pointers
 */

//adding libraries
#include <stdio.h>
#include <stdlib.h>

//global variable for array size
int size;

//function to calculate sum of array elements
int arraySum(int* arr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); //pointer arithmetic
    }
    return sum;
}

//function to print every alternate element and its position
void arrayTraverse(int* arr) {
    printf("alternative elements and their positions:\n");
    for (int i = 0; i < size; i += 2) {
        printf("element at position %d: %d\n", i, *(arr + i)); //pointer arithmetic
    }
}

//main function
int main() {
    int* arr;

    //ask user for array size
    printf("enter size of the array: ");
    scanf("%d", &size);

    //allocate memory using malloc
    arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    //input values into array
    for (int i = 0; i < size; i++) {
        printf("enter value for element %d: ", i);
        scanf("%d", arr + i); // pointer arithmetic
    }

    //call arraySum and display result
    int total = arraySum(arr);
    printf("summary of all elements: %d\n", total);

    //call arrayTraverse to display alternate elements
    arrayTraverse(arr);

    //free allocated memory
    free(arr);
    
    //making sure my code runs with no issues
    return 0;
}

/* -------OUTPUT--------
 *eamado3@eamado3-vm:~/test_directory$ gcc integerArrays.c -o integerArrays
 *eamado3@eamado3-vm:~/test_directory$ ./integerArrays
 *enter size of the array: 3
 *enter value for element 0: 1
 *enter value for element 1: 3
 *enter value for element 2: 5
 *summary of all elements: 9
 *alternative elements and their positions:
 *element at position 0: 1
 *element at position 2: 5
 */

