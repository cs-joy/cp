#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void ispalindrome(){
    int f, l;

    int flag=0;

    int i;
    string rev="";

    cin >> f >> l;

    string str;
    cout << "enter a string " << str;
    /*
    for (i = 0; i < f; i++)
    {
        cin >> st[i];
    }
    */

    while (l--)
    {
        string notRev="";
        
        int n, m;

        cin >> n >> m;

        

        for (i = n - 1; i < m; i++)
        {
          
            notRev[i];

        }

        for (int i = m - 1; i >= (n - 1); i--)
        {
    
           convert[i];


        }

    }
}

int main() {

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cout << "Case #" << i <<": ";
        ispalindrome();
    }

    return 0;
}