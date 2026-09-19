
#include <iostream>
using namespace std;

bool judgeSquareSum(int c) {

    for(long long int a = 0; a * a <= c; a++) {

        long long int remaining = c - a * a;

        long long int s = 0;
        long long int e = remaining;

        while(s <= e) {

            long long int mid = s + (e - s) / 2;
            long long int square = mid * mid;

            if(square == remaining) {
                return true;
            }
            else if(square < remaining) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }

    return false;
}

int main() {

    int c;

    cout << "Enter a number: ";
    cin >> c;

    if(judgeSquareSum(c)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}
