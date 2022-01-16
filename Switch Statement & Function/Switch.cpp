#include <iostream>
using namespace std;
int main()
{

    int n;

    cout << endl;
    cout << "Enter the value: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "One" << endl;
        break;

    case 2:
        cout << "Second" << endl;
        break;

    case 3:
        cout << "Third" << endl;
        break;

    default:
        cout << "You are in default case" << endl;
        break;
    }
}

/*

Output:

Enter the value: 2
Second

Enter the value: 5
You are in default case

*/