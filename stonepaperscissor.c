#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer) {
    // If both the user and computer have chosen the same thing
    if (you == computer)
        return -1;

    // Stone vs Paper
    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's')
        return 1;

    // Stone vs Scissor
    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;

    // Paper vs Scissor
    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;

    return -1; // Fallback case
}

// Function to generate computer's choice
char getComputerChoice() {
    int n = rand() % 100;
    if (n < 33)
        return 's'; // Stone
    else if (n >= 33 && n < 66)
        return 'p'; // Paper
    else
        return 'z'; // Scissor
}

// Function to restart the game
int restartGame() {
    char choice;
    printf("\n\n\t\t\t\tDo you want to play again? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
        return 1;
    return 0;
}

// Driver Code
int main() {
    char you, computer;
    int userPoints = 0, computerPoints = 0;
    int result;

    srand(time(NULL)); // Initialize random seed

    do {
        userPoints = 0;
        computerPoints = 0;

        printf("\n\n\n\t\t\t\t--- WELCOME TO THE STONE, PAPER, SCISSOR GAME ---\n\n");

        // The match continues until one player reaches 3 points
        while (userPoints < 3 && computerPoints < 3) {
            printf("\n\t\t\t\tEnter 's' for STONE, 'p' for PAPER and 'z' for SCISSOR\n");
            printf("\t\t\t\t--------------------------------------------------\n");

            // Input from the user
            scanf(" %c", &you); // Note the space before %c to consume any leading newline characters

            // Check for valid input
            if (you != 's' && you != 'p' && you != 'z') {
                printf("\n\n\t\t\t\tInvalid input! Please enter 's', 'p', or 'z'.\n");
                continue; // Ask for input again
            }

            computer = getComputerChoice(); // Get computer's random choice

            // Function call to play the game
            result = game(you, computer);

            printf("\n\n\t\t\t\t------------------- RESULT -------------------\n");

            if (result == -1) {
                printf("\n\t\t\t\tGame Draw!\n");
            } else if (result == 1) {
                userPoints++;
                printf("\n\t\t\t\tYou won this round!\n");
            } else {
                computerPoints++;
                printf("\n\t\t\t\tComputer won this round!\n");
            }

            printf("\n\t\t\t\tYou chose: %c | Computer chose: %c\n", you, computer);
            printf("\t\t\t\tCurrent Score -> You: %d | Computer: %d\n", userPoints, computerPoints);
        }

        // Determine who won the match
        printf("\n\n\t\t\t\t------------------- MATCH RESULT -------------------\n");
        if (userPoints == 3) {
            printf("\n\t\t\t\tCongratulations! You have won the match!\n");
        } else {
            printf("\n\t\t\t\tComputer won the match! Better luck next time!\n");
        }

        // Credits section
        printf("\n\n\t\t\t\t------------- THANK YOU FOR PLAYING -------------\n");
        printf("\t\t\t\t              Developed by: Mohit Lakhara\n");
        printf("\t\t\t\t              GitHub: /mohitlakhara-ind\n");
        printf("\t\t\t\t-------------------------------------------------\n");

    } while (restartGame()); // Restart the game if the player chooses to

    return 0;
}
