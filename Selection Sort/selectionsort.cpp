
#include <iostream>
using namespace std;

void sortArr(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[] = {10, 5, 29, 93, 44};
    int n = 5;

    sortArr(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}