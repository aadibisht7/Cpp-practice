#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the amount: ";
    cin >> n;

    int rs100, rs50, rs20, rs1;

    switch(1){
        case 1: rs100 = n/100;
                n = n % 100;
                cout << "Number of 100's required: " << rs100 << endl;

        case 2: rs50 = n/50;
                n = n % 50;
                cout << "Number of 50's required: " << rs50 << endl;

        case 3: rs20 = n/20;
                n = n % 20;
                cout << "Number of 20's required: " << rs20 << endl;
                
        case 4: rs1 = n/1;
                n = n % 1;
                cout << "Number of 1's required: " << rs1 << endl;
                
    }
}
