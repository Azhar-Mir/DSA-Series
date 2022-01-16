#include <bits/stdc++.h>
using namespace std;
int aP(int n)
{
    int ans = ((3 * n) + 7);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the no: ";
    cin >> n;

    cout << "Arithmetic Progression is: ";
    cout << aP(n);

    return 0;
}

/*

Output:

Enter the no: 4
Arithmetic Progression is: 19

*/