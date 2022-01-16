#include <bits/stdc++.h>
using namespace std;

// Function Signature
void printCounting(int n)
{
    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;

    // Function Call
    printCounting(n);

    return 0;
}

/*

Output:

Enter the value: 15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 

*/