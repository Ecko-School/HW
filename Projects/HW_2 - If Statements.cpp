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
    const float num1 = 10.39;
    const float num2 = 4.203;

    // function
    cout << "Please input an integer: ";
    cin >> integer1;
    cout << "Please input another integer: ";
    cin >> integer2;
    cout << "Your number is " << integer1 + integer2 << endl;
    cout <<  "Random numbers multiplied: "<<num1 * num2 << endl;
    cout << "Please input another integer: ";
    cin >> advancedInt;
    // advIntStuff
    if(isEven(advancedInt) == true ) {
        cout << advancedInt << " is even." << endl;
    } else
    {
        cout << advancedInt << " is odd." << endl;
    }

    if (advancedInt > comparisonInt )
    {
        cout << advancedInt << " is greater than " << comparisonInt << endl;
    } else if( advancedInt < comparisonInt)
    {
        cout << advancedInt << " is less than " << comparisonInt << endl;
    } else if( advancedInt == comparisonInt)
    {
        cout << advancedInt << " is equal to " << comparisonInt << endl;
    }

    if(advancedInt > 10 && isEven(advancedInt) == true)
    {
        cout << "True" << endl; // If its greater than 10 and even
    } else
    {
        cout << "False" << endl; // If its not greater than 10 or isnt even
    }

    cout << advancedInt << " * 60 = " << advancedInt * 60 << endl; // I think one minute is 60 seconds, might be wrong who knows

    return 0;
}
