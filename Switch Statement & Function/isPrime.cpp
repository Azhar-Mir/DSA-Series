#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Is a prime number ";
    }
    else
    {
        cout << "Is not a prime number ";
    }

    return 0;
}

/*

Output:

Enter the value: 202
Is not a prime number 

*/