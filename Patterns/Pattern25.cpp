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
            value = value + 1;
            col += 1;
        }
        cout<<"\n";
        row += 1;
    }

    return 0;
}

