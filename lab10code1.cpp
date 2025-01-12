#include <iostream>
using namespace std;
int main() {

    string studentName;
    cout << "What is the name of the student?" << endl;
    cin >> studentName;

    float percentage;
    cout << "What is your percentage?" << endl;
    cin >> percentage;

    float income;
    cout << "What is your family income?" << endl;
    cin >> income;

    if (percentage >= 80) {
        if (percentage > 90) {
            if (income < 50000) {
                cout << "Student eligible for Full Scholarship" << endl;
            } else if (income <= 100000) {
                cout << "Student eligible for Half Scholarship" << endl;
            } else {
                cout << "Student eligible for No Scholarship" << endl;
            }
        } else {
            cout << "Student eligible for Half Scholarship" << endl;
        }
    } else {
        cout << "Student is not eligible for any scholarship" << endl;
    }

    return 0;

}