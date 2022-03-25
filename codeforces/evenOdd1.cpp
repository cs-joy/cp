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

    while(T--) {
        int x;
        cin >> x;
        oddEven(x);
    }

    return 0;
}