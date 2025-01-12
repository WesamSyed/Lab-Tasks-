#include <iostream>
using namespace std;
int main () {

    int a, b, c;

// Here we are assigning variables

    cout << "Insert the length of Side A of triangle: ";
    cin >> a;
    cout << "Insert the length of Side B of triangle: ";
    cin >> b;
    cout << "Insert the length of Side C triangle: ";
    cin >> c;

    //using if-else to determine traigle sides
    
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle. Sides must be greater than 0." << endl;
    } else if (a + b > c && a + c > b && b + c > a) 

        if (a == b && b == c) {
            cout << "In this case, the triangle is Equilateral." << endl;\
            
        } else if (a == b || a == c || b == c) {
            cout<< "In this case, the triangle will be set to be isosceles";
            } else {
            cout << "The triangle is Scalene." << endl;
        }
    else {
        cout << "Invalid Triangle. The sides do not satisfy the triangle inequality." << endl;
    }

    return 0;

    }

