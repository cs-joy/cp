#include <iostream>

using namespace std;

int main() {

    int i;
    long double ln;
    char ch;
    float fl;
    double d;
    
    scanf("%d %Lf %c %f %lf", &i, &ln, &ch, &fl, &d);

    //long double output value -> 12345678912345 to 12345678912345.000000
    
    printf("%d\n%Lf\n%c\n%.3f\n%.9lf\n", i, ln, ch, fl, d);

    

    return 0;
}

/*

# Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.
------------------------------------------------------
# Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
------------------------------------------------------
# Sample Input

3 12345678912345 a 334.23 14049.30493
------------------------------------------------------
# Sample Output

3
12345678912345
a
334.230
14049.304930000
------------------------------------------------------
# Explanation

Print int ,
followed by long ,
followed by char ,
followed by float ,
followed by double .
------------------------------------------------------
@source - https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

*/