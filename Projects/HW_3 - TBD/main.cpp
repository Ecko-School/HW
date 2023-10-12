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

//------------------------------ FUNCTIONS -------------------------------
int randNum(int maxNum)
{
    srand(time(NULL)); // Randomize seed in random
    return rand() % maxNum+1; // Return random int with a max of 100
}

int checkNum(int answer, int number ) // Answer is what the player inputs, number is the random num
{
    if(answer == number)
    {
        return 1; // 1 is "Perfect"
    }
    else if(answer > number)
    {
        return 2; // 2 is "Too Much"
    }
    else if(answer < number)
    {
        return 0; // 0 is "Too Little"
    }

}

bool debug = false; // If true, you have the ability to change the maxNum (default is 100), and it will also show you the answer

//------------------------------ MAIN PROJ -------------------------------

int main ()
{
    int random_number = randNum(100);
     // Measure passes for the while loop (One thing that took me half an hour to realize is DONT PUT THIS IN THE WHILE LOOP AS IT WILL KEEP RETURNING IT TO 0 EVERY TIME IT RUNS)
    if (debug == true)
    {
        int maxNum; // Init maxNum for game
        cout << "Set maximum number: "; // Ask for maxNum
        cin >> maxNum; // Ask for maxNum input
        random_number = randNum(maxNum); // Override the randomNum if debug is enabled.
        cout << "number: " << random_number << endl; // Print answer
    }
     // Use randNum() function above to get a random number
    int playerNum; // init the players input number
    bool guessedCorrectly = false; // Use for while loop activity
    int passes = 0;
    while(guessedCorrectly == false) // WHILE LOOP
    {
        passes = passes + 1;
        cout << "Please input an integer that is 0 - 100 : "; // Ask for int 0-100
        cin >> playerNum; // init players input
        int check = checkNum(playerNum, random_number); // Check if players answer compared to random num is equal, greater, or less than.
        if (check == 1)
        {
            cout <<"Winner Winner Chicken Dinner!!! It took you " << passes << " guesses to get it correctly, good job!" << endl;
            guessedCorrectly = true; // Change guessedCorrectly to true, closing the while loop.
        }
        else if (check == 2) // If check re
        {
            cout << "Too high, try again!" << endl;
        }
        else if (check == 0)
        {
            cout << "Too low, try again!" << endl;
        }
    }
  return 0;
}
