/*
    例题2-4 阶乘之和
    S=1!+2!+3!+......+n! n<=1e6 输出后6位
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>
#include<time.h>

using namespace std;

int main()
{
    //int n<13
    //long long n<20
    const int Mod=1000000;
    int n,S=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int factorial=1;
        for(int j=1; j<=i; j++)
        {
            factorial=(factorial*j%Mod);
        }
        S=(S+factorial)%Mod;
    }
    cout<<S<<endl;
    printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);

    return 0;
}
