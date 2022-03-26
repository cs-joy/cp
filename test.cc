#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s;
    char j[] = "tui world";
    getline(cin, s);
    cout << s << " " << j << strlen(j) <<"\n";

    
    int i;
    while(cin >> i) //If the amount of data is unknown, the following loop is useful:
    {
        cout << i;
    }

    return 0;
}