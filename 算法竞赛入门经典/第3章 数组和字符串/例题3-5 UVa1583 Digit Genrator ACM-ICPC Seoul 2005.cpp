#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

int nums[10];
int isSplite(int n)
{
    int digits=0;//È«¾Ö TLE
    while(n)
    {
        digits+=1;
        n/=10;
    }
    return digits;
}
int isCover(int num,int n)
{
    int num_cp=num;
    int i=0,index=0,flag=1;
    while(num)
    {
        nums[i++]=num%10;
        num/=10;
        index+=1;
    }
    int sum=0;
    for(int i=0; i<index; i++)
        sum+=nums[i];
    if(sum+num_cp==n)
        return 1;
    else
        return 0;
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    int n,T;
    cin>>T;
    while(T--)
    {
        int flag=1;
        cin>>n;
        int num=n-isSplite(n)*9;
        memset(nums,0,sizeof(int)*10);
        while(num<n)
        {
            if(isCover(num,n))
            {
                cout<<num<<endl;
                flag=0;
                break;
            }
            else
                num+=1;
        }
        if(flag)
            cout<<0<<endl;
    }
}
