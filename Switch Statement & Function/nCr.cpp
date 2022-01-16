#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denomerator = factorial(r) * factorial(n - r);

    return numerator / denomerator;
}
int main()
{
    int n, r;
    cout << "Enter the n & r values: " << endl;
    cin >> n >> r;
    factorial(n);
    cout << "nCr of " << n << " & " << r << " is: " << nCr(n, r) << endl;
    return 0;
}

/*

Output:

Enter the n & r values: 
14
5
nCr of 14 & 5 is: 29

*/