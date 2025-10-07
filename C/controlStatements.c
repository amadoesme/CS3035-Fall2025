/*Creating a code that helps the professor check input 
 *the score obtained by 10 students on a test and outputs 
 *the highest score obtained by any student
 *and also the second highest score*/

#include <stdio.h>

int main(void) {
    int score = -1; 
    int highest = -1;         //getting the highest score
    int secondHighest = -1;   //getting the second highest score
    int i = 0; 
    
    //asking for user input
    printf("Enter scores for students.\n");
    
    //finding the highest and second highest scores
    while (i < 10) {
        printf("Enter a score for one of the students %d: ", i + 1);
        scanf("%d", &score);

        //getting the highest score
        if (score > highest) {
            secondHighest = highest;   //passing the highest number to get second
            highest = score;
        } 
        else if (score > secondHighest) { //getting the second highest score
            secondHighest = score;
        }
        i++; //incrementing
    }
    
    //printing the highest and second highest score
    printf("The highest score is %d\n", highest);
    printf("The second highest score is %d\n", secondHighest);
    
    return 0;
}

