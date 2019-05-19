/*
    程序3-2 开灯问题
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<limits>
#include<memory.h>
#include<set>
using namespace std;
//#define Local

const int N=1005;
int light[N];
int result[N];
int main()
{
#ifdef Local
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int n,k;
    cin>>n>>k;
    for(int i=1; i<N; i++)
        light[i]=1;
    for(int i=2; i<=k; i++)
    {
        for(int j=2; j<=n; j++)
        {
            if(j%i==0)
                light[j]=!light[j];
        }
    }
    int index=0;
    for(int i=1; i<=n; i++)
    {
        if(light[i])
            result[index++]=i;
    }
    for(int i=0; i<index-1; i++)
        cout<<result[i]<<" ";
    cout<<result[index-1]<<endl;

    return 0;
}

