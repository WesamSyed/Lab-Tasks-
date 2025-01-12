#include <iostream>
using namespace std;

int main() {
    string firstWord, secondWord;
    
    cout << "Enter the first word: ";
    cin >> firstWord;
    
    cout << "Enter the second word: ";
    cin >> secondWord;
    
    if (firstWord == secondWord) {
        cout << "Yes, both the words are the same." << endl;
    } else {
        cout << "No, this shows that both the words are different." << endl;
    }
    
    return 0;
}