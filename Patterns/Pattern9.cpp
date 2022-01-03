#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    
    while(row<=n){
        
        int col = 1;
        int value = row;
        while(col<=row){
            
            cout<<value<<" ";
            value = value + 1;
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
2 3
3 4 5

*/
