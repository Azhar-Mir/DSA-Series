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
            
            char ch = ('A' + row - 1);
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<"\n";
        row += 1;
    }
    
    return 0;
}

/*
Output:

3
A 
B B 
C C C 

*/
