#include <iostream>
using namespace std;

void test()
{
    /* Declare variables 
     @ N, > the number of candy bags 
     @ M, >  the number of kids
     @ sum and set it to 0
     @ candyRemain > the number of pieces of candy will remain.
    */
    int N, M, sum(0), candyRemain;
    
    // Read the integers from the standard input
    cin >> N >> M;

    // Declare `C` array of length N
    int C[N];

    // Read N integers from the standard input and save them in the array `C[]`
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];

        // Loop through array `C[]` and sum it's values
        sum += C[i];

        // Compute the value of the sum modulo M
        candyRemain = sum % M;
    }

    // Print the result to the standard output
    cout << candyRemain << "\n";
}

int main() {

    // Declare and read the number of test cases
    int T;
    cin >> T;

    // Loop over the number of test cases
    for(int i = 1; i <= T; i++){

        // Print case number
        cout << "Case #" << i << ": ";

        // and solve each test
        test();
    }

    return 0;
}