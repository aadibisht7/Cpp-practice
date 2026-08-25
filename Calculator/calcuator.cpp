#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter 1st Number: "; 
    cin >> a;
    char operation;
    cout << "Enter Operation [+, -, /, *, %]: ";
    cin >> operation;
    int b;
    cout << "Enter 2nd Number: ";
    cin >> b;

    switch (operation)
    {
    case '+': cout << "Ans: " << (a + b);
            break;
    case '-': cout << "Ans: " << (a - b);
            break;
    case '*': cout << "Ans: " << (a * b);
            break;
    case '/': cout << "Ans: " << (a / b);
            break;
    case '%': cout << "Ans: " << (a % b);
            break;
    default:
        break;
    }

}