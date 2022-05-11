#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Rock paper scissor game
// May 11th 2022

// Win Lose or Draw.
char getResult(char userPick, char computerPick)
{
    if(userPick == computerPick) {
        return 'd';
    }
    else if((userPick == 'p') && (computerPick == 'r')) {
        return 'w';
    }
    else if((userPick == 'r') && (computerPick == 's')) {
        return 'w';
    }
    else if((userPick == 's') && (computerPick == 'p')) {
        return 'w';
    }
    else {
        return 'l';
    }
    return userPick;
    return computerPick;
    
}


// Getting user input.
char getUserInput()
{
    char userInput;
    scanf("Please enter which choice you want. R being rock: \nP being paper: \nS being scissors: %c", &userInput);

    userInput = tolower(userInput);
    return userInput;
}


// Getting computer's choice
char getComputerChoice() 
{
    // Getting random number
    srand(time(NULL));

    // Declaring relevant variables.
    int randomNumber = (rand() % 3) + 1;
    char computersChoice;

    // Making the logic.
    switch(randomNumber) {
        case 1:
            computersChoice = 'r';
            break;
        case 2:
            computersChoice = 'p';
            break;
        case 3:
            computersChoice = 's';
            break;
    }
    return computersChoice;
}

int main() 
{

    char choice = getComputerChoice();
    char input = getUserInput();
    char result = getResult(userPick, computerPick);

    // result

    switch(result)
    {
    case 'w':
        printf("Computers pick: %c\n", computerPick);
        printf("User pick: %c\n", userPick);
        printf("You won");
        break;
    
    case 'l':
        printf("Computers pick: %c\n", computerPick);
        printf("User pick: %c\n", userPick);
        printf("You lose");
        break;
    
    case 'd':
        printf("Computers pick: %c\n", computerPick);
        printf("User pick: %c\n", userPick);
        printf("Draw game");
        break; 
    }

    // User.
    switch(input)
    {
    case 'r':
        printf("rock");
        break;

    case 'p':
        printf("paper");
        break;
    
    case 's':
        printf("scissors");
        break;

    default:
        printf("Invalid action");
        break; 
    }

    // Computer.
    switch (choice)
    {
    case 'r':
        printf("rock\n");
        break;
    
    case 'p':
        printf("paper\n");
        break;
    
    case 's':
        printf("scissor\n");
        break;
    
    default:
        printf("Invalid action.");
        break;
    }

    return 0;
}
