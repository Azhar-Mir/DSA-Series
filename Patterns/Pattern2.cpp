#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    
    int i=1;
    
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
return 0;
}

/*
Output:

Enter the value: 5
11111
22222
33333
44444
55555

*/
