#include <iostream>
using namespace std;
int main() {

    int itemChoice;
    int quantity;
    float price = 0;
    float totalCost;
    float discount = 0;
    float finalCost;

    cout << "Welcome to the Grocery Store!\n";
    cout << "Here is our menu:\n";
    cout << "1. Apples - Rs. 2000 per kg\n";
    cout << "2. Bananas - Rs. 50 per dozen\n";
    cout << "3. Rice - Rs. 150 per kg\n";
    cout << "4. Milk - Rs. 120 per liter\n";
    cout << "5. Eggs - Rs. 12 per egg\n\n";

    cout << "Please enter the number of the item you'd like to buy (1-5): ";
    cin >> itemChoice;

    if (itemChoice < 1 || itemChoice > 5) {
        cout << "Oops! That item number is not valid. Please run the program again.\n";
        return 0;
    }

    cout << "How many would you like to buy? ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Hmm, the quantity must be a positive number. Please run the program again.\n";
        return 0;
    }

    switch (itemChoice) {
        case 1: price = 2000; break;
        case 2: price = 50; break;
        case 3: price = 150; break;
        case 4: price = 120; break;
        case 5: price = 12; break;
    }

    totalCost = price * quantity;

    if (totalCost > 10000) {
        discount = 0.20;
    } else if (totalCost > 5000) {
        discount = 0.10;
    } else if (totalCost > 5000) {
        discount = 0.05;
    }

    finalCost = totalCost * (1 - discount);

    cout << "\nTotal cost: Rs. " << totalCost << endl;
    if (discount > 0) {
        cout << "You got a " << discount * 100 << "% discount!\n";
        cout << "After applying the discount, your final cost is: Rs. " << finalCost << endl;
    } else {
        cout << "No discount applies this time.\n";
        cout << "Your final cost is: Rs. " << totalCost << endl;
    }

    return 0;
    
}
