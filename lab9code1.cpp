#include <iostream>
using namespace std;
int main() {

    int inputNumber;
    cout << "Please enter a number: " << endl;
    cin >> inputNumber;

    if (inputNumber % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
    
}
