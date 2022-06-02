#include <iostream>
using namespace std;

int sum(int a, int b, int c);

int main() {

    int x, y, z;


    cin >> x >> y >> z;

    sum(x, y, z);

    return 0;
}

int sum(int a, int b, int c) {
    

    if(a >= 1 && a <= 1000 && b >= 1 && b <= 1000 && c >= 1 && c <= 1000){
        int r = a + b + c;
        cout << r;
    } 
    return 0;
}

/*

 @Problem
 Read  numbers from stdin and print their sum to stdout.
------------------------------------
  @Task

  Read  numbers from stdin and print their sum to stdout.
------------------------------------
  @Input Format

  One line that contains  space-separated integers: , , and .
------------------------------------
  @Constraints
  1 <= a, b, c <= 1000
------------------------------------
  @Output Format

  Print the sum of the three numbers on a single line.
------------------------------------
  @Sample Input

  1 2 7
------------------------------------
  @Sample Output

  10
------------------------------------
  @Explanation

  The sum of the three numbers is 1 + 2 + 7 = 10.
------------------------------------

 #source- https://www.hackerrank.com/challenges/cpp-input-and-output/problem 
*/