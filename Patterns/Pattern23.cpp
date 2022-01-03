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
        int value = row;
        while(col<=row){
            cout<<value;
            col += 1;
        }
        row += 1;
        cout<<"\n";
    }

    return 0;
}

/*
Output:

4
   1
  22
 333
4444

*/
