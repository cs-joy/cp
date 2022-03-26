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

        if(strlen(n) <= 100) {
            int b=n[a]-48;
            
            if(b%2 == 0) {
            cout << "even" << endl;
            cout << strlen(n);
        }
        else {
            cout << "odd\n";
            cout << strlen(n);
        }
        }
        else {
            cout << "Overload Character!! Maximum Limit is 100 but you are inputing - " << strlen(n) << "character" << endl;
        }
        
    }

    return 0;
}