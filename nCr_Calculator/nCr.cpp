#include <iostream>
using namespace std;

int nfact(int n, int r){
    int nfact = 1;
    for(int i = n; i >= 1; i--){
        nfact = nfact * i;
    }
    return nfact;
}
int rfact(int n, int r){
    int rfact = 1;
    for(int i = r; i >= 1; i--){
        rfact = rfact * i;
    }
    return rfact;
}

int rnfact(int n, int r){
    int rnfact = 1;
    for(int i = (n-r); i >= 1; i--){
        rnfact = rnfact * i;
    }

    return rnfact;
}

int main(){
    int n, r;
    cin >> n >> r;

    int ans = (nfact(n, r))/(rfact(n, r) * rnfact(n, r));

    cout << ans;
}