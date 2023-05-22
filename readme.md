###Rock Paper Scissor! 

is a hand game and played between two people, in which each player simultaneously forms one of three shapes. The winner of the game is decided as per the below rules:

Rock vs Paper -> Paper wins ->  as paper wraps the rock.
Rock vs Scissor -> Rock wins ->  as rock breaks the scissor.
Paper vs Scissor -> Scissor wins ->  as scissor cuts the paper.

How to play?

The user will be asked to make choice.
According to the choice of user and computer and then the result will be displayed along with the choices of both computer and user.
For eg: if user selects: Rock and computer selects Scissor, then the user wins!!

Approach: (Only for coders not for players)
Below is the functionality that needed to be implemented in the program:
main() function: 
It consists of the declaration of the variables.
printf() and scanf() functions for displaying the content and taking input from the user. It also contains  two predefined functions:
srand() and rand() which are used to generate random numbers in the range (0, RAND_MAX) and srand() especially will help to generate a random number at each time.
Take modulo of random number generated with 3 to make its range between (0 and 2).
As the range is up to 3 only, the distribution among all the options i.e., rock, paper, and scissors is equal as all of them have an equal probability of coming.
Note: This random number will decide the choice of computer as:

If the number is  0 then the choice will be Rock.
If the number is 1  then the choice will be Paper.
If the number is 2 then the choice will be Scissors.
play() function: This function consists of if-else statements that will compare the choice of user and computer. If the user wins then it will return 1. Otherwise, if the computer wins then it will return 0. If it is a tie, it will return -1.

