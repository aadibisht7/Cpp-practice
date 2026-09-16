#include <iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
        
    while(s <= e){
        long long int square = mid * mid;

        if(square == n){
            return 1;
        }
        if(square < n){
            ans = mid;
            s = mid + 1; 
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return 0;
}

bool isPerfectSquare(int num) {
    int ans = binarySearch(num);

    if(ans == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cin >> num;
    cout << "ans: " << isPerfectSquare(num);
}