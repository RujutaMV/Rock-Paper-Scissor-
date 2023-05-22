// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Function to implement the game
int play(char you, char computer)
{
    // If user's choice is rock and
    // computer's choice is paper
    if (you == 'r' && computer == 'p')
        return 0;
 
            // If user's choice is paper and
            // computer's choice is rock
    else if (you == 'p' && computer == 'r') 
    return 1;
 
    // If user's choice is rock and
    // computer's choice is scissor
    else if (you == 'r' && computer == 's')
        return 1;
 
    // If user's choice is scissor and
    // computer's choice is rock
    else if (you == 's' && computer == 'r')
        return 0;
 
    // If user's choice is paper and
    // computer's choice is scissor
    else if (you == 'p' && computer == 's')
        return 0;
 
    // If user's choice is scissor and
    // computer's choice is paper
    else if (you == 's' && computer == 'p')
        return 1;

    // If both the user and computer
    // has choose the same thing
    else return -1;
}

// Main function
int main()
{
    int random_num;
    char player, computer, result;

    srand(time(NULL));  //pseudo-random number varies for every program call
    random_num = rand() % 3;  // Any random number %3 will output: 0, 1 or 2
 
    // probability of computer choosing a number between 0,1,2 is equal
    if (random_num == 0)  
        computer = 'r'; // r is denoting Rock
 
    else if (random_num == 1)
        computer = 'p'; // p is denoting Paper
 
    else computer = 's'; // s is denoting Scissor
 
    printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");
   
    scanf("%c", &player); // input from the user
 
    result = play(player, computer); // Function Call to play the game
 
    printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",player, computer);
    if (result == -1) 
        printf("\n\n\t\t\t\tGame Draw!\n");
    
    else if (result == 1) 
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    
    else printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    
    return 0;
}
