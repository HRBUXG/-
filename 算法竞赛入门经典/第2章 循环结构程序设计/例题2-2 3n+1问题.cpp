/*
    ¿˝Ã‚2-2 3n+1Œ Ã‚
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n,times=0;
    cin>>n;
    while(n>1)
    {
        if(n%2)
            n=3*n+1;
        else
            n/=2;
        times+=1;
    }
    cout<<times<<endl;

    return 0;
}
