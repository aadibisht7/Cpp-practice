#include <iostream>
using namespace std;

void reverse(int array[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printarr(int array[], int n){
    
    for(int i=0; i <n; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int arr[5] = {4, 6, 5, 2, 1};
    int brr[6] = {-9, -4, -19, -2, 9, 7};

    reverse(arr, 5);
    reverse(brr, 6);

    printarr(arr, 5);
    cout << endl;
    printarr(brr, 6);
}