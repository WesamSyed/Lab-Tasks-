#include <iostream>
using namespace std;
int main() {

int number;

    // Here you can enter the number
    cout << "Enter a number: ";
    cin >> number;

    // Here, You can check if the number is odd or even using the ternary operator 
    
    string result = (number % 2 == 0) ? "The number is Even." : "The number is Odd.";

    // Result is shown

    cout << "result";


    return 0;

}