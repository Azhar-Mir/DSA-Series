#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        
        
        int col = 1;
        
        while(col<=n-row+1){
            
            cout<<col;
            col = col + 1;
        }
        
        int star = 2*row-2;
        
        while(star){
            
            cout<<"*";
            star = star - 1;
        }
        
        int start = n-row+1;
        
        while(start){
            
            cout<<start;
            start = start - 1;
        }
        
        cout<<"\n";
        row = row + 1;
    }


    return 0;
}

/*
Outout:

5
1234554321
1234**4321
123****321
12******21
1********1

*/
