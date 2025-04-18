#include <iostream>
using namespace std;


int main(){
    int numOne, numTwo; 
    char op;

    cout << "Enter first number : ";
    cin >> numOne;
    
    cout << "Enter an operator : ";
    cin >> op;

    cout << "Enter second number : ";
    cin >> numTwo;

    if(op == '+'){
        cout << "Result : " << numOne + numTwo;
    }else if(op == '-'){
        cout << "Result : " << numOne - numTwo;
    }else if(op == '*'){
        cout << "Result : " << numOne * numTwo;
    }else if(op == '/'){
        cout << "Result : " << numOne / numTwo;
    }else{
        cout << "Invalid";
    }

    return 0;
}