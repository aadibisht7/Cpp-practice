#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int i = 1;
  while(i <= n){
    int j = 1;
    while(j <= n){
      cout << char('A' + j + i - 2) << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}