#include <iostream>
using namespace std;
int main()
{

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int ans = 0;
    int a = 0, b = 0, c = 0, d = 0;

    switch (1)
    {
    case 1:
        a = amount / 100;
        amount = amount % 100;
        cout << "Number of 100Rs notes required are: " << a << endl;
    case 2:
        b = amount / 50;
        amount = amount % 50;
        cout << "Number of 50Rs notes required are: " << b << endl;
    case 3:
        c = amount / 20;
        amount = amount % 20;
        cout << "Number of 20Rs notes required are: " << c << endl;
    case 4:
        d = amount / 1;
        amount = amount % 1;
        cout << "Number of 1Rs notes required are: " << d << endl;
    default:
        break;
    }

    return 0;
}

/*

Output:

Enter the amount: 1452
Number of 100Rs notes required are: 14
Number of 50Rs notes required are: 1
Number of 20Rs notes required are: 0
Number of 1Rs notes required are: 2

*/