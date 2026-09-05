#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2; //Optimised (start + end) / 2

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

        mid = start + (end - start)/2; //Optimised (start + end) / 2
    }
    return -1;
}


int main(){
    int even[] = {2, 6, 8, 11, 14, 25};
    int odd[] = {3, 6, 7, 10, 12};
    int key = 2;

    int ans = binarySearch(even, 6, key);

    cout << ans;
}