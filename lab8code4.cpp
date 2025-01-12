#include <iostream>
using namespace std;
int main(){

    int MA1;
    int MA2;
    int MA3;

    cout<<"Enter value for a"<<endl;
    cin>>MA1;

    cout<<"Enter value for b"<<endl;
    cin>>MA2;

    cout<<"Enter value for c"<<endl;
    cin>>MA3;

    int result;
    result=(MA1*(MA2+MA3))+(MA1+MA3);

    cout<<"The final calculated result is (a*(b+c))+(c*(a+C))"<< result <<endl;

    return 0;
}
