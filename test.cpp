#include <iostream>
#include <cmath>
using namespace std;


int reverse(int real){
    int x = real;
    int r = 0;
    while(x != 0){
        int digit = x%10;
        r = r * 10 + digit;
        x = x/10;
    }
    return r;
}

int main(){
    int real;
    cin >> real;

    int reverseofnum = reverse(real);
    cout << reverseofnum;
    if(reverseofnum == real){
        cout << "true";
    }
    else{
        cout << "false";
    }

}