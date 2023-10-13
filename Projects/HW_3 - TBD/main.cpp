//------------------------------ IMPORT LIBRARIES -------------------------------
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//INSTRUCTION
/*
Your c++ code will randomly choose a whole integer between 0 and 100 and the user must guess what it is.
Your program will keep asking for a new number until the user correctly guesses the answer.

Your program must:
Ask for a guess
Check for valid inputs
If guess is too high, print "Too High"
If guess is too low, print "Too Low"
If guess is correct:
    Exit Loop
    Output "Winner winner chicken dinner!"
    Output number of guesses it took

*/

//Corrections:
//    Dont apply javascript camelcase to functions ;( [X]
//    Switch CheckNum() from returning int to bool [X]



//------------------------------ FUNCTIONS -------------------------------
int RandNum(int maxNum)
{
    srand(time(NULL)); // Randomize seed in random
    return rand() % maxNum+1; // Return random int with a max, defined by maxNum
}

bool CheckNum(int answer, int number ) // Answer is what the player inputs, number is the random num
{
    if(answer == number)
    {
        return true; // return true if the player gets the number correct
    }
    else if(answer > number || answer < number)
    {
        return false; // return false if the player gets the number incorrect
    }

}

bool debugMode = false; // If true, you have the ability to change the maxNum (default is 100), and it will also show you the answer

//------------------------------ MAIN PROJ -------------------------------

int main ()
{
    int random_number = RandNum(100); // Get random number with a max of 100 (PUT THIS BEFORE THE IF(DEBUG)
     // Measure passes for the while loop (One thin// Use randNum() function above to get a random numberg that took me half an hour to realize is DONT PUT THIS IN THE WHILE LOOP AS IT WILL KEEP RETURNING IT TO 0 EVERY TIME IT RUNS)
    int passes = 0;
    int playerNum; // init the players input number
    bool guessedCorrectly = false; // Use for while loop activity

    if (debugMode == true)
    {
        int maxNum; // Init maxNum for game
        cout << "Set maximum number: "; // Ask for maxNum
        cin >> maxNum; // Ask for maxNum input
        random_number = RandNum(maxNum); // Override the randomNum if debug is enabled.
        cout << "number: " << random_number << endl; // Print answer
    }

    while(guessedCorrectly == false) // WHILE LOOP
    {
        passes = passes + 1;
        cout << "Please input an integer that is 0 - 100 : "; // Ask for int 0-100
        cin >> playerNum; // init players input
        int check = CheckNum(playerNum, random_number); // Check if players answer compared to random num is equal, greater, or less than.
        if (check == true)
        {
            cout <<"Winner Winner Chicken Dinner!!!" << endl;
            guessedCorrectly = true; // Change guessedCorrectly to true, closing the while loop.
        }
        else if (check == false && playerNum > random_number) // If the guessed number is NOT correct, AND the number is larger, output too high.
        {
            cout << "Too high, try again!" << endl;
        }
        else if (check == false && playerNum < random_number) // If the guessed number is NOT correct, AND the number is smaller, output too low.
        {
            cout << "Too low, try again!" << endl;
        }
    }
    if(passes <= 1) { // I only added this because I didnt like seeing 1 guesses, 1 guess(es), or 10 guess(es) too wack looking
        cout << "It took you 1 guess to get it correctly, good job!" << endl; // If correct in one guess, print this
    } else
    {
        cout << "It took you " << passes << " guesses to get it correctly, good job!" << endl; // If correct with more than 1 guess, print this
    }

  return 0;
}
