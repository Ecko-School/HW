// HW #1 Hello World
#include <iostream> // InputOutput

using namespace std; // Use std namespace to avoid using std:: in all standard instances

int main() // Main
{
    string personsName; // Create string for user input
    cout << "Hello world!" << endl; // Print helloWorld, endline.
    cout << "What is your name? "; // Print question, dont endline for same-line input
    cin >> personsName; // Input for name
    cout << "Hello " << personsName << "!" << endl; // Print persons name
    return 0;
}
/* 
Outputs:

  Hello world!
  What is your name? Donut
  Hello Donut!    
  
*/


