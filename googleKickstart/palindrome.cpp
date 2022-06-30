#include<iostream>
#include <string>
#include <cstring>

using namespace std;

void palindromeNumber(){
    int n, num, digit, rev=0;

    cout << "Enter a number";
    cin >> num;
    n = num;
    
    do {

        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;

    } while(num != 0);

    cout << " The reverse of the number is: " << rev << endl;

    if(n == rev){
         cout << " The number is a palindrome.";
    } else {
         cout << " The number is not a palindrome.";
    }
}
/*
void palindromString(){
    string str, check, reverseCharacter=0, character;

    cout << "enter a string: ";
    cin >> str;

    check = str;
    do{
        character = str % 10;
        reverseCharacter = (reverseCharacter * 10) + character;
        str = str / 10;
    } while(str != 0);

    cout << "rev: " << reverseCharacter;

}
*/

void pS(){
    char string[20];
    int length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string);
    
    length = strlen(string);
    
    for(int i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome", string);
    }    
    else {
        printf("%s is a palindrome", string);
    }
}

int main() {
    
    //palindromeNumber();
    pS();

    return 0;
}