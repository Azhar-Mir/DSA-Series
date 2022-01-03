#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        int space = row - 1;
        
        while(space){
            cout<<" ";
            space -= 1;
        }
        
        int col = 1;
        int value = row;
        
        while(col<=n-row+1){
            cout<<value;
            value = value + 1;
            col +=1;
        }
        cout<<"\n";
        row += 1;
    }

    return 0;
}

/*
Output:

4
1234
 234
  34
   4
   
*/
