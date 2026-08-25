#include <iostream>
using namespace std;

int maxValue(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        //max = max(max, arr[i])    <--- same output  [   max(a, b)  ]
    }
    return max;
}
int minValue(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        //min = min(min, arr[i])    <--- same output [  min(a, b)  ]
    }
    return min;
}

int main(){
    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Maximum value: " << maxValue(arr, size);
    cout << "Minimum value: " << minValue(arr, size);
}
