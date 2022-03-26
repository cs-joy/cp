#include <iostream>
#include<string.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        char n[100];
        cin >> n;
        int a = strlen(n)-1;
        int b=n[a]-48;
        if(b%2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd\n";
        }
    }

    return 0;
}