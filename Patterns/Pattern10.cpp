#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row,col;
    
    for(row = 1;row<=n;row++){
        for(col=0;col<row;col++){
            cout<<row+col<<" ";
        }
        cout<<"\n";
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
