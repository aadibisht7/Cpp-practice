#include <iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    int e = n - 1;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s <= e){
        long long int square = mid * mid;

        if(square == n){
            return mid;
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
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j*j < n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int precision = 3;
    int tempSol = binarySearch(n);
    cout << "Ans: " << morePrecision(n, precision, tempSol);

    return 0;
}   