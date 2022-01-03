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
            char ch = 'A' + row + col - 2;
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
A B C 
B C D 
C D E 

*/
