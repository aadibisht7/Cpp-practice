#include <iostream>
using namespace std;

string ed(int num){
    if(num % 2 == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
}

int main(){
    int num;
    cin >> num;
    string ans = ed(num);
    cout << ans;
}