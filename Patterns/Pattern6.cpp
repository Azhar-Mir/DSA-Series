#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1; // int i = 1;
    
    while(row<=n){
        
        int col = 1; // int j = 1;
        while(col<=row){
            cout<<"* ";
            col = col + 1;
        }
        cout<<"\n";
        row = row + 1;
    }
    
    return 0;
}

/*
Output:

5
*
* *
* * *
* * * *
* * * * *

*/

