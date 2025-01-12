#include <iostream>
using namespace std;
int main() {

    int firstNum;
    int secondNum;

    cout << "Please enter the first number: " << endl;
    cin >> firstNum;

    cout << "Please enter the second number: " << endl;
    cin >> secondNum;

    if (firstNum > secondNum) {
        cout << "The first number is larger." << endl;
    } else if (firstNum < secondNum) {
        cout << "The second number is larger." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
    
}