#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    char ch = 'A';
    
    while(row<=n){
        
        int col = 1;
        
        while(col<=n){
            
            cout<<ch<<" ";
            ch = ch + 1;
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
A B C
D E F
G H I
*/

