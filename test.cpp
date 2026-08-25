#include <iostream>
using namespace std;

void findDuplicate(int array[], int n){
    int start = 0;
    while(start < n){
        for(int end = start + 1; end < n; end++){
            if(array[start] == array[end]){
                cout << "Duplicate: " << array[start] << endl;
            }
        }
        start++; 
    }
}

void printarr(int array[], int n){
    
    for(int i=0; i <n; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int arr[7] = {4, 6, 2, 2, 1, 9, 9};

    findDuplicate(arr, 7);

    printarr(arr, 7);
}