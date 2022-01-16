#include <bits/stdc++.h>
using namespace std;
bool isEven(int num)
{

    if (num & 1)
    { //Odd
        return 0;
    }
    else
    { //Even
        return 1;
    }
}
int main()
{
    int n;
    cout << "Enter the no: ";
    cin >> n;

    if (isEven(n))
    {
        cout << "Number is Even " << endl;
    }
    else
    {
        cout << "Number is Odd " << endl;
    }

    return 0;
}

/*

Output:

Enter the no: 75
Number is Odd

Enter the no: 248
Number is Even 

*/