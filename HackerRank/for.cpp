#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a<=9 && a<=b && a>= 1)
    {
        switch(a)
        {
            case 1:
            cout << "one\n";
            if(b <= 1){
                break;
            }
            case 2:
            cout << "two\n";
            if(b <= 2){
                break;
            }
            case 3:
            cout << "three\n";
            if(b <= 3){
                break;
            }
            case 4:
            cout << "four\n";
            if(b <= 4){
                break;
            }
            case 5:
            cout << "five\n";
            if(b <= 5){
                break;
            }
            case 6:
            cout << "six\n";
            if(b <= 6){
                break;
            }
            case 7:
            cout << "seven\n";
            if(b <= 7){
                break;
            }
            case 8:
            cout << "eight\n";
            if(b <= 8){
                break;
            }
            case 9:
            cout << "nine\n";
            if(b <= 9){
                break;
            }
        }
    }
    
    if(b > 9){
        for(int i = 10; i <= b; i++){
            if(i%2==0){
              cout << "even";
            } else {
              cout << "odd";
            }
        }
    }
    
    return 0;
}

/*

# Input Format

You will be given two positive integers, a, and b(a <= b), separated by a newline.
------------------------------------------------------------------------
# Output Format

For each integer n in the inclusive interval [a,b]:

-> If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
-> Else if n>9  and it is an even number, then print "even".
-> Else if n > 9 and it is an odd number, then print "odd".
Note: [a,b]={x∈Z| a<=x<=b}={a, a+1,...,b}
------------------------------------------------------------------------
# Sample Input

8
11
------------------------------------------------------------------------
# Sample Output

eight
nine
even
odd
------------------------------------------------------------------------
@source- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

*/
