#include <iostream>
using namespace std;
int main() {

    int bagSize;
    cout << "Enter the size of the bag: " << endl;
    cin >> bagSize;

    int areaCovered;
    cout << "Enter the area covered by the bag: " << endl;
    cin >> areaCovered;

    int costPerBag;
    cout << "Enter the cost per bag: " << endl;
    cin >> costPerBag;

    int costPerPound;
    cout << "Enter the cost per pound: " << endl;
    cin >> costPerPound;

    int pounds;
    int costPerArea;

    costPerArea = areaCovered * pounds;
    costPerPound = bagSize * pounds;

    cout << "Cost per area is: " << costPerArea << endl;
    cout << "Cost per pound is: " << costPerPound << endl;

    return 0;
    
}