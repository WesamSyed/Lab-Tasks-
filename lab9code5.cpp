#include <iostream>
using namespace std;
int main(){
    
    int num1;
    cout<<"num1 ="<<endl;
    cin>>num1;

    string arithmeticoperation;
    cout<<"arithmeticoperation ="<<endl;
    cin>> arithmeticoperation;

    int num2;
    cout<<"num 2="<<endl;
    cin>>num2;

    if(arithmeticoperation=="+"){
        num1+num2;
    } else if(arithmeticoperation=="-"){
        num1 - num2;
    } else if(arithmeticoperation=="*"){
        num1 * num2;
    } else if(arithmeticoperation=="/"){
        num1/num2;
    } else if(arithmeticoperation=="%"){
        num1%num2;
    } else{
        cout<<"invalid arithmeticoperation"<<endl;
    }

    return 0;   
}
