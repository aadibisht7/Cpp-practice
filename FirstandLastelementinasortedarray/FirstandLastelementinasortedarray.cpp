#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int arr[] = {1, 2, 2, 3, 3, 5};
    int key = 3;
    cout << "The first occurance of key " << key << " is " << firstOccurance(arr, 6, key) << endl;
    cout << "The Last occurance of key " << key << " is " <<  lastOccurance(arr, 6, key);
}