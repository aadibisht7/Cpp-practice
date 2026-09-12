#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int m, int mid){
    int painterCount = 1;
    int blockSum = 0;

    for(int i = 0; i < size; i++){
        if(blockSum + arr[i] <= mid){
            blockSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > m || arr[i] > mid){
                return false;
            }
            blockSum = arr[i];
        }
    }
    return true;
}

int allotBlock(int arr[], int size, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i]; 
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr, size, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[] = {5, 5, 5, 5};
    int n = 4;
    int m = 2;

    cout << "Ans: " << allotBlock(arr, n, m);
}