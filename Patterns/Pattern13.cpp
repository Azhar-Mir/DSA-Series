#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        int col = 1;
        
        while(col<=n){
            
            char ch = 'A' + col - 1;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<"\n";
        //row = row + 1;
        row += 1;
    }

    return 0;
}

/* 
Output:

3
A B C
A B C
A B C

*/
