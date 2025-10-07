/*Created: Oct 6 2025
 *Student: Esmeralda Amado
 *Description: Program that uses enum and switch to determine workdays
 *Inpired by a similar code that was on the Liang textbook, intro to Java
 */

//importing library
#include <stdio.h>

//enumeration for days of the week
enum daysOfWeek { MON, TUES, WED, THURS, FRI, SAT, SUN };

//main method
int main() {
    enum daysOfWeek day;

    //asks user for day input
    printf("Enter a number (0–6) for the day of the week:\n");
    printf("0 = Monday\n");
    printf("1 = Tuesday\n");
    printf("2 = Wednesday\n");
    printf("3 = Thursday\n");
    printf("4 = Friday\n");
    printf("5 = Saturday\n");
    printf("6 = Sunday\n");
    scanf("%d", (int*)&day); //cast to int* to store input in enum

    //validating input
    if (day < MON || day > SUN) {
        printf("Invalid input. Please enter a number between 0 and 6.\n");
        return 1;
    }

    //switch case with enum constants
    switch (day) {
        case MON:
        case TUES:
        case WED:
        case THURS:
        case FRI:
            printf("It is a workday\n");
            break;
        case SAT:
        case SUN:
            printf("It is the weekend\n");
            break;
    }

    //making sure program runs well
    return 0;
}

/*--------OUTPUT--------
 *eamado3@eamado3-vm:~/test_directory$ gcc isItWorkday.c -o isItWorkday
 *eamado3@eamado3-vm:~/test_directory$ ./isItWorkday
 *Enter a number (0–6) for the day of the week:
 *0 = Monday
 *1 = Tuesday
 *2 = Wednesday
 *3 = Thursday
 *4 = Friday
 *5 = Saturday
 *6 = Sunday
 *1
 *It is a workday
 *eamado3@eamado3-vm:~/test_directory$ ./isItWorkday
 *Enter a number (0–6) for the day of the week:
 *0 = Monday
 *1 = Tuesday
 *2 = Wednesday
 *3 = Thursday
 *4 = Friday
 *5 = Saturday
 *6 = Sunday
 *5
 *It is the weekend
 */

