#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        int col = 1;
        
        while(col<=row){
            cout<<(row - col + 1)<<" ";
            col = col + 1;
        }
        cout<<"\n";
        row = row + 1;
    }
    
    return 0;
}

/*
Output:

3
1 
2 1 
3 2 1

*/
