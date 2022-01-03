#include <bits/stdc++.h>
#include <math.h>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    n*=-1;
    while(n){

    int bit=n&1;
    ans=bit*pow(10,i)+ans;
    n=n>>1;
    i++;
    
    }

    int ones=~(ans);
    int twos=ones+1;

    int ones1=~(twos);
    int twos2=ones1+1;
    
    cout<<twos2<<endl;

    return 0;
}

/*

Output:

-15
1111

*/
