#include <iostream>
using namespace std;

int main(){

    char vowel;

    cout << "Enter Characters : ";
    cin >> vowel; 

    switch (vowel){
        
        case 'A':
        case 'a':
            cout << "Impresive";
            break;
        case 'E':
        case 'e':
            cout << "That's amazing";
            break;
        case 'I':
        case 'i':
            cout << "Nice work";
            break;
        case 'O':
        case 'o':
            cout << "Fantastic";
            break;
        case 'U':
        case 'u':
            cout << "Well done ";
            break;
            
        default:
            cout << "Invalid Character";
            break;
    }
}


