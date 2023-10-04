#include <iostream>

using namespace std;


/*
INSTRUCTION:
Ask for 2 int, add them together and output answer
Multiply 2 float constants together and output answer

Lastly, ask for another integer:
    - Output if it is even or odd (use modulus)
    - Output if it is greater than, less than, or equal to zero
    - Output "True" if value is greater than 10 and even, else false
    - Multiply by the number of seconds in a minute (60) and output answer
*/
bool isEven(int num) // function for checking if a number is even
{
    if(num % 2 == 0) // if the remainder of num / 2 is 0, its even.
    {
        return true;
    } else if(num % 2 != 0) // Other way around
    {
        return false;
    }
}

int main()
{
    // init vars first
    int integer1;
    int integer2;
    int advancedInt;
    int comparisonInt = 0; // In this case, zero (For the greater/less/equal to)

    int minute = 60; // Define one minute, in seconds.
    const float num1 = 10.39;
    const float num2 = 4.203;

    // function
    cout << "Please input an integer: "; // Ask for the first num
    cin >> integer1; // Ask for first num input
    cout << "Please input another integer: "; // Ask for second num
    cin >> integer2; // Ask for second num input
    cout << "Your number is " << integer1 + integer2 << endl; // Addition of both numbers
    cout <<  "Random numbers multiplied: "<<num1 * num2 << endl; // Random numbers mult. printed to console
    cout << "Please input another integer: "; // Ask for another int
    cin >> advancedInt; // Input int
    // advIntStuff
    if(isEven(advancedInt) == true ) { // Use isEven() to make it easier in if statement
        cout << advancedInt << " is even." << endl; // Print even if even
    } else
    {
        cout << advancedInt << " is odd." << endl; // Print odd if odd
    }

    if (advancedInt > comparisonInt ) // If the number is greater than the comparison int (Can be changed to something else above)
    {
        cout << advancedInt << " is greater than " << comparisonInt << endl;
    } else if( advancedInt < comparisonInt)
    {
        cout << advancedInt << " is less than " << comparisonInt << endl;
    } else if( advancedInt == comparisonInt)
    {
        cout << advancedInt << " is equal to " << comparisonInt << endl;
    }

    if(advancedInt > 10 && isEven(advancedInt) == true) // If adv is greater than 10 AND is even
    {
        cout << "True" << endl; // If its greater than 10 and even
    } else
    {
        cout << "False" << endl; // If its not greater than 10 or isnt even
    }

    cout << advancedInt << " * 60 = " << advancedInt * minute << endl; // I think one minute is 60 seconds, might be wrong who knows

    return 0;
}
