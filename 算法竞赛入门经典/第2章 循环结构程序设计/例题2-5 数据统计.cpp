/*
    例题2-5 数据统计
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>
#include<time.h>
#define Local

using namespace std;

int main()
{
#ifdef Local
    freopen("data.in","r",stdin);
    freopen("data.out","r",stdout);
#endif // Local

    int n,max=INT_MIN,min=INT_MAX,s=0,times=0;
    while(scanf("%d",&n)==1)
    {
        s+=n;
        if(n>max)
            max=n;
        if(n<min)
            min=n;
        times+=1;
    }
    cout<<min<<" "<<max<<" "<<(double)s/times;
    return 0;
}
