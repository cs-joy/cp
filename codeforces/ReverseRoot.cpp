#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin>>T;
    float brr[256];
    
    long long int arr[256];
    for(int i=0;i<T;i++){
        cin>>arr[i];

        
        brr[i] = sqrt(arr[i]);
    }

    for(int j = T-1; j >= 0; j--) {
            cout << brr[j] << "\t";
    }

    return 0;
}