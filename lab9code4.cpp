#include <iostream>
using namespace std;
int main() {
    float productPrice;
    
    cout << "Enter the price of the product: " << endl;
    cin >> productPrice;

    if (productPrice > 5000) {
        float discountAmount = (productPrice * 10) / 100;
        float finalPrice = productPrice - discountAmount;

        cout << "The final price after 10% discount is: " << finalPrice << endl;
    } else {
        float discountAmount = (productPrice * 5) / 100;
        float finalPrice = productPrice - discountAmount;

        cout << "The final price after 5% discount is: " << finalPrice << endl;
    }

    return 0;

}
