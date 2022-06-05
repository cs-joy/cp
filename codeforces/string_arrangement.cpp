#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter1 = 0, counter2 = 0;
    char ch[1000];
    cin >> ch;
    
    int st_len = strlen(ch);
    
    for(int i = 0; i < st_len; i++){
        if(ch[i] >= 65 && ch[i] <= 90){
            counter1++;
        } else {
            counter2++;
        }
    }
    
    if(counter1 > counter2){
        for(int i = 0; i < st_len; i++){
            ch[i] = toupper(ch[i]);
        }
    } else {
        for(int i = 0; i < st_len; i++){
            ch[i] = tolower(ch[i]);
        }
    }
    
    cout << ch;
   
    return 0;
}
