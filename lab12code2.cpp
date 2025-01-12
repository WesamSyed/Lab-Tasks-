#include <iostream>
using namespace std;
int main () {

// Here we are assigning variables

int MathScore, EnglishScore;
cout << "Enter the secured marks in maths by student";
cin >> MathScore;

cout << "Enter the secured marks in English by student";
cin >> EnglishScore;

//Here we are calculating the total marks of the student

float OverallPercentage;
cout << "Enter your Overall Percentage";
cin >> OverallPercentage;

// if-else used to give evaluate the overall percentage with different values 

if ( MathScore == 85 && EnglishScore == 80 && OverallPercentage >= 90) {
   cout << "You are eligible for the scholarship";
}
 else { cout<< "You are not eligibile for the scholarship";
 
 }

 return 0;

}
