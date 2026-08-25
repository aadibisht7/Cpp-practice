#include <iostream>
using namespace std;

bool lookUp(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10] = {3, 5, 4, 9, 2, 12, 44, 14, 19, 20};
    int key;
    cin >> key;

    bool found = lookUp(arr, 10, key);

    if(found){
        cout << "Key is present";
    }
    else{
        cout << "Key not present";
    }

    return 0;
}