#include <iostream>

using namespace std;

int main() {

    int i;
    long double ln;
    char ch;
    float fl;
    double d;
    
    //scanf("%d %ld %c %f %lf", &i, &ln, &ch, &fl, &d);
    cin >> i >> ln >> ch >> fl >> d;
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i, ln, ch, fl, d);

    

    return 0;
}