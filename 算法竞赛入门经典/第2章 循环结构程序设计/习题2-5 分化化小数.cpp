/*
    习题2-5 分数化小数（decimal）
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

    int a,b,c;
    while(cin>>a>>b>>c&&(a!=0||b!=0||c!=0))
    {
        printf("%.*f\n",c,(double)a/b);
    }
    return 0;
}
