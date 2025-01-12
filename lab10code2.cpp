#include <iostream>
using namespace std;
int main() {

    cout << "Please enter your name: ";
    string name;
    cin >> name;

    cout << "Enter your marks for the 1st and 2nd year: ";
    int firstYearMarks, secondYearMarks;
    cin >> firstYearMarks >> secondYearMarks;

    float average = (firstYearMarks + secondYearMarks) / 1100.0 * 100;
    cout << "Your average percentage is: " << average << "%" << endl;

    if (average < 60) {
        cout << "You are not eligible for admission." << endl;
    } else if (average >= 60 && average < 75) {
        cout << "Enter your SAT score: ";
        int satScore;
        cin >> satScore;

        if (satScore >= 1200) {
            cout << "You have passed the SAT and are eligible to apply." << endl;
        } else {
            cout << "Your SAT score is too low, and you are not eligible to apply." << endl;
        }
    } else if (average >= 75) {
        cout << "You are eligible to apply, and the SAT is optional." << endl;
    }


    return 0;


}

