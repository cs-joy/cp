#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if(a <= b){
        if(1 <= a <= 9 && 1 <= b <= 9)
        {
            
                // for a
                if(a == 1){
                    cout << "one\n";
                }
                else if(a == 2){
                    cout << "two\n";
                }
                else if(a == 3){
                    cout << "three\n";
                }
                else if(a == 4){
                    cout << "four\n";
                }
                else if(a == 5){
                    cout << "five\n";
                }
                else if(a == 6){
                    cout << "six\n";
                }
                else if(a == 7){
                    cout << "seven\n";
                }
                else if(a == 8){
                    cout << "eight\n";
                }
                else if(a == 9){
                    cout << "nine\n";
                }
                
                // for b
                if(b == 1){
                    cout << "one\n";
                }
                else if(b == 2){
                    cout << "two\n";
                }
                else if(b == 3){
                    cout << "three\n";
                }
                else if(b == 4){
                    cout << "four\n";
                }
                else if(b == 5){
                    cout << "five\n";
                }
                else if(b == 6){
                    cout << "six\n";
                }
                else if(b == 7){
                    cout << "seven\n";
                }
                else if(b == 8){
                    cout << "eight\n";
                }
                else if(b == 9){
                    cout << "nine\n";
                } else if(b > 9) {
                    cout << "nine\n";
                }
            //find out even or odd for a
            if(a%2 == 0){
                cout << "even\n";
            } else {
                cout << "odd\n";
            }

            //find out even or odd for b
            if(b%2 == 0){
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