#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        int col = 1;
        
        while(col<=n-row+1){
            
            cout<<"*";
            col += 1;
        }
        cout<<"\n";
        row += 1;
    }


    return 0;
}

/*
Output:

4
****
***
**
*

*/
