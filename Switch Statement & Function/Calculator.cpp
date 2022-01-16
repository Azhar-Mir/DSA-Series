#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter the First value: ";
    cin >> a;
    cout << "Enter the Second value: ";
    cin >> b;

    char op;
    cout << "Enter the expression for operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Invalid operator!!" << endl;
        break;
    }

    return 0;
}

/*

Output:

Enter the First value: 5
Enter the Second value: 8
Enter the expression for operator: *
40

Enter the First value: 55
Enter the Second value: 42
Enter the expression for operator: -
13

*/