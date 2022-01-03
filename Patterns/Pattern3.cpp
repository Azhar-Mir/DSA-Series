#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j = j+1;
        }
        cout<<"\n";
        i = i+1;
    }

    return 0;
}

/*
Output:

5
12345
12345
12345
12345
12345

*/
