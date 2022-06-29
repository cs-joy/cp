#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, n, m;
    
    cin >> testCase;
    
    if(1<= testCase && testCase <= 1000){
        while(testCase--){
          cin >> n >> m;
          if(n >= 1 && m <= 10000){
              cout << n << m;
          }
        }
    }

    return 0;
}