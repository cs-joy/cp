#include <iostream>

using namespace std;

void oddEven(int n) {
    if(n%2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}

int main() {
    int T;
    cin>> T;
    
    int i=1;
    while(i<=T) {
        int x;
        cin >> x;
        oddEven(x);

        i++;
    }

    return 0;
}