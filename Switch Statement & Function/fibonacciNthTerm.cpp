#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    int n1 = 0, n2 = 1, sum = 0;
    for (int i = 2; i <=n; i++)
    {
        if (i == n)
        {
            return sum;
        }
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the no: ";
    cin >> n;

    int ans = fibo(n);
    cout << "The nth term of Fibonacci is: " << ans << endl;
    return 0;
}

/*

Output:

Enter the no: 7
The nth term of Fibonacci is: 8

*/