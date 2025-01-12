#include <iostream>
using namespace std;
int main() {
    
    string studentName;
    int marksSubject1;
    int marksSubject2;
    int marksSubject3;
    int marksSubject4;
    int marksSubject5;
    int totalMarks;
    float percentage;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter marks for Subject 1: ";
    cin >> marksSubject1;

    cout << "Enter marks for Subject 2: ";
    cin >> marksSubject2;

    cout << "Enter marks for Subject 3: ";
    cin >> marksSubject3;

    cout << "Enter marks for Subject 4: ";
    cin >> marksSubject4;

    cout << "Enter marks for Subject 5: ";
    cin >> marksSubject5;

    totalMarks = marksSubject1 + marksSubject2 + marksSubject3 + marksSubject4 + marksSubject5;
    percentage = (totalMarks / 500.0f) * 100;

    cout << "Student Name: " << studentName << endl;
    cout << "Total Marks: " << totalMarks << " out of 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;

}