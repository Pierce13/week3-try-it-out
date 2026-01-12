/*
We are building the number guessing game....again!
I have commented out the TODOs that I would like you to do. Have fun!
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    //TODO: Declare a variable of a character type called playAgain. The purpose of this
    // variable is to track if we are going to play multiple games in one session.
    char playAgain;

    //TODO: Create a do-while loop. For scoping purposes, I have kept the curly braces
    // that you need. I just want you to add the correct logic....
    do
    {
        //TODO: Make a random number beetween 1 and 100 with 100 being inclusive. Assign
        // the result to the variable secretNumber
        int secretNumber = rand() % 100 + 1;
        int guess = 0;
        int attempts = 0;

        cout << "I'm thinking of a number between 1 and 100.\n";

        //TODO: Create a while loop that continues to run as long as the user's guess is not
        // equal to the secret number.
        while (guess != secretNumber)
        {
            cout << "Enter your guess: ";
            //TODO: Have the user enter their guess
            cin >> guess;
            attempts++;
            
            //TODO: Create an if-else-if statement that tells the user guessed too high
            // or too low
            if (guess > secretNumber)
            {
                cout << "Too high!\n\n";
            }
            else if (guess < secretNumber)
            {
                cout << "Too low!\n\n";
            }
        }

        cout << "You got it!\n";
        cout << "It took you " << attempts << " tries.\n";

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
