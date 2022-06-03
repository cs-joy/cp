#include <iostream>

using namespace std;

int max_of_four(int x, int y, int z, int n){
    if(x > y && x > z && x > n){
        return x;
    } else if(y > x && y > z && y > n){
        return y;
    } else if(z > x && z > y && z > n){
        return z;
    } else {
        return n;
    }
    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}



/*

# Input Format

Input will contain four integers - a,b,c,d , one per line.
-------------------------------------------
# Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.
-------------------------------------------
# Sample Input

3
4
6
5
-------------------------------------------
# Sample Output

6
-------------------------------------------


@source- https://www.hackerrank.com/challenges/c-tutorial-functions/problem
*/
