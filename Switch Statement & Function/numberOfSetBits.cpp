#include <bits/stdc++.h>
using namespace std;
int setBits(int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter the values: " << endl;
    cin >> a >> b;

    cout << "The set bits is: ";
    cout << setBits(a, b);
    return 0;
}

/*

Output:

Enter the values: 
2
4
The set bits is: 2

*/
