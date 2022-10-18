#include<iostream>
using namespace std;
main(){
    float a,b;
    char operation;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter Operation (+,-,*,/) : ";
    cin>>operation;

    cout<<"Enter second number : ";
    cin>>b;

    switch (operation)
    {
        case '+' :
            cout<< "Result = " <<a+b;
            break;
        case '-' :
            cout<< "Result = " <<a-b;
            break;
        case '*' :
            cout<< "Result = " <<a*b;
            break;
        case '/' :
            cout<< "Result = " <<a/b;
            break;
        default:
            cout<< "Invalid Operation" <<endl;
            break;
    }
}