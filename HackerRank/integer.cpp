#include<iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    if(n >= 1)
    {
        switch (n)
        {
          case 1:
            cout << "one";
            break;
          case 2:
            cout << "two";
            break;
          case 3:
            cout << "three";
            break;
          case 4:
            cout << "four";
            break;
          case 5:
            cout << "five";
            break;
          case 6:
            cout << "six";
            break;
          case 7:
            cout << "seven";
            break;
          case 8:
            cout << "eight";
            break;
          case 9:
            cout << "nine";
            break;  

          default:
            cout << "Greater than 9";
            break;
        }
    }

    return 0;
}

/*

# Input Format

A single integer, n.
-----------------------------------------------------
Constraints
1 <= n <= 9
-----------------------------------------------------
Output Format

If , 1 <= n <= 9 then print the lowercase English word corresponding to the number (e.g., one for 1, two for 1, etc.); otherwise, print Greater than 9.
-----------------------------------------------------
# Sample Input 0

5
-----------------------------------------------------
# Sample Output 0

five
-----------------------------------------------------
## Explanation 0

five is the English word for the number 5.
-----------------------------------------------------
# Sample Input 1

8
-----------------------------------------------------
# Sample Output 1

eight
-----------------------------------------------------
## Explanation 1

eight is the English word for the number 8.
-----------------------------------------------------
# Sample Input 2

44
-----------------------------------------------------
# Sample Output 2

Greater than 9
-----------------------------------------------------
## Explanation 2

n=44 is greater than 9, so we print Greater than 9.
-----------------------------------------------------

@source - https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

*/