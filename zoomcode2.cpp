#include <iostream>
using namespace std;
int main () {

    int number1, number2;

    cout<< "enter number 1";
    cin>> number1;

    cout<< "enter number 2";
    cin>> number2;

    if (number1>number2){
    cout<<"number 1 is greater than number 2"<<endl;
    }

    else if(number1==number2) {
        cout<< "number 1 is equal to number 2"<<endl;
    }

    else {
        cout<<"number 2 is greater than number 1"<<endl;
    }
    return 0;
    
}