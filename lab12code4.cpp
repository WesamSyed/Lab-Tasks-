#include <iostream>
using namespace std;
int main() {
    
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    //Using if-else to see what number is the largest
    
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else {
        int largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
        cout << "The largest number is " << largest << "." << endl;
    }

    return 0;
}