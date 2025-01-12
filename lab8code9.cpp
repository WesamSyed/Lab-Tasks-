#include <iostream>
using namespace std;
int main() {

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int num11;
    int num12;
    int num13;
    int num14;
    int num15;

    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    cout << "Enter the 3rd number: ";
    cin >> num3;
    cout << "Enter the 4th number: ";
    cin >> num4;
    cout << "Enter the 5th number: ";
    cin >> num5;

    cout << "Enter the 6th number: ";
    cin >> num6;
    cout << "Enter the 7th number: ";
    cin >> num7;
    cout << "Enter the 8th number: ";
    cin >> num8;
    cout << "Enter the 9th number: ";
    cin >> num9;
    cout << "Enter the 10th number: ";
    cin >> num10;

    cout << "Enter the 11th number: ";
    cin >> num11;
    cout << "Enter the 12th number: ";
    cin >> num12;
    cout << "Enter the 13th number: ";
    cin >> num13;
    cout << "Enter the 14th number: ";
    cin >> num14;
    cout << "Enter the 15th number: ";
    cin >> num15;

    int sum = num1 + num2 + num3 + num4 + num5;
    cout << "The sum of the first 5 numbers is: " << sum << endl;

    int product = num6 * num7 * num8 * num9 * num10;
    cout << "The product of the next 5 numbers is: " << product << endl;

    int difference = num11 - num12 - num13 - num14 - num15;
    cout << "The difference of the last 5 numbers is: " << difference << endl;

    int finalResult = (sum + product) - difference;
    cout << "The final result is: " << finalResult << endl;

    return 0;
    
}