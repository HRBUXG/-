/*
    习题2-4 子序列的和
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>
#include<time.h>
//#define Local

using namespace std;

int main()
{
#ifdef Local
    freopen("data.in","r",stdin);
    freopen("data.out","r",stdout);
#endif // Local

    int n,m,cas=1;
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        cout<<"Case "<<cas++<<":";
        double s=0;
        for(int i=n; i<=m; i++)
        {
            s+=1.0/(i*i);
        }
        printf("%.6f\n",s);
    }
    return 0;
}
