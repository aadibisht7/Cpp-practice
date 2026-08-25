#include <iostream>
using namespace std;

bool indentify(int num){
    if(num & 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin >> num;

    if(indentify(num)){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}