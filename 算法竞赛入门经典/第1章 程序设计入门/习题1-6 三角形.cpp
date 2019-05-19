/*
    Ï°Ìâ1-6 Èý½ÇÐÎ£¨triangle£©
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        if(a>c)
        {
            int t=a;
            a=c;
            c=t;
        }
        if(b>c)
        {
            int t=b;
            b=c;
            c=t;
        }
        if(a*a+b*b==c*c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
        cout<<"not a triangle"<<endl;

    return 0;
}
