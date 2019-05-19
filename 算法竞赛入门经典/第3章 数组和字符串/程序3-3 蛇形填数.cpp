/*
    程序3-3 蛇形填数
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<limits>
#include<memory.h>
#include<set>
using namespace std;
//#define Local

const int N=20;
int nums[N][N];

int main()
{
#ifdef Local
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int n,x,y,tot=1;
    cin>>n;
    memset(nums,0,sizeof(nums));
    nums[x=0][y=n-1]=tot;
    while(tot<n*n)
    {
        //向下
        while(x+1<n&&!nums[x+1][y])
            nums[++x][y]=++tot;

        //向左
        while(y-1>=0&&!nums[x][y-1])
            nums[x][--y]=++tot;

        //向上
        while(x-1>=0&&!nums[x-1][y])
            nums[--x][y]=++tot;

        //向右
        while(y+1<n&&!nums[x][y+1])
            nums[x][++y]=++tot;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%3d",nums[i][j]);
        }
        cout<<endl;
    }

    return 0;
}

