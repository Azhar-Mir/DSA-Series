#include <bits/stdc++.h>
using namespace std;

int power()
{
    cout << "Enter the value: " << endl;
    int m, n;
    cin >> m >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * m;
    }

    return ans;
}
int main()
{

    int result = power();

    cout << "Power of two numbers is: " << result;

    return 0;
}

/*

Output:

Enter the value: 
12
3
Power of two numbers is: 1728

*/