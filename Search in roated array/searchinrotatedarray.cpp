#include <iostream>
using namespace std;

int pivotElement(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {7, 9, 1, 2, 3};
    int size = 5;
    int pivot = pivotElement(arr, size);
    int key = 3;

    int ans;

    if(arr[pivot] <= key && arr[size-1] >= key){
        ans = binarySearch(arr, pivot, size-1, key);
    }
    else{
        ans = binarySearch(arr, 0, pivot-1, key);
    }

    cout << ans;

    return 0;
}