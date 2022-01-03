#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        int space = n - row;
        
        while(space){
            cout<<" ";
            space = space - 1;
        }
        
        int col = 1;
        
        while(col<=row){
            cout<<col;
            col = col + 1;
        }
        
        int start = row - 1;
        
        while(start){
            cout<<start;
            start = start - 1;
        }
        
        cout<<"\n";
        row += 1;
    }

    return 0;
}

/*
Output:

4
   1
  121
 12321
1234321

*/
