#include <iostream>
using namespace std;

void reverseAlt(int arr[], int size){
    for(int i = 0; i< size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
        
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {3, 5, 6, 2, 1};

    reverseAlt(arr, 5);
    printArr(arr, 5);
}