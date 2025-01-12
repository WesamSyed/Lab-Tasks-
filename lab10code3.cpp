#include <iostream>
using namespace std;
int main() {

    float attendancePercentage;
    cout << "Enter your total attendance: ";
    cin >> attendancePercentage;

    attendancePercentage = (attendancePercentage / 155) * 100;
    cout << "Your attendance percentage is: " << attendancePercentage << "%" << endl;

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (attendancePercentage > 75) {
        if (marks >= 85) {
            cout << "Your grade is A" << endl;
        } else if (marks >= 80) {
            cout << "Your grade is A-" << endl;
        } else if (marks >= 75) {
            cout << "Your grade is B+" << endl;
        } else if (marks >= 70) {
            cout << "Your grade is B" << endl;
        } else if (marks >= 65) {
            cout << "Your grade is C+" << endl;
        } else if (marks >= 60) {
            cout << "Your grade is C" << endl;
        } else if (marks >= 55) {
            cout << "Your grade is D+" << endl;
        } else if (marks >= 50) {
            cout << "Your grade is D" << endl;
        } else {
            cout << "Your grade is F" << endl;
        }
    } else {
        cout << "You have failed due to low attendance." << endl;
    }

    return 0;
}
