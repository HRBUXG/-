/*
    习题2-3 倒三角形（triangle）
    输入：n
    输出：n层倒三角形
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

    int n;
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        for(int space=n; space>i; space--)
            cout<<" ";
        for(int j=2*i-1; j>=1; j--)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
