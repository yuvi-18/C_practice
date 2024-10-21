/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.
*/

#include <stdio.h>

int main(){
//     // generate a random number below or equal to 100

//     for (int i = 0; i <= 100; i++)
//     {
        
//     }
    
//     return 0;
// }


    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}
