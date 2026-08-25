#include <iostream>
using namespace std;

void reversealt(int array[], int n){
    int start = 0;
    int end = start + 1;

    while(end < n){
        swap(array[start], array[end]);
        start = start + 2;
        end = end + 2;
    }
}

void printarr(int array[], int n){
    
    for(int i=0; i <n; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int arr[5] = {4, 6, 5, 2, 1};

    reversealt(arr, 5);

    printarr(arr, 5);
    cout << endl;
}