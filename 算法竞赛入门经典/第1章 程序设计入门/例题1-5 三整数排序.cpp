/*
    ����������
    ���룺3������
    �������С��������
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
    //����һ
    if(a<=b&&b<=c)
        cout<<a<<b<<c;
    else if(a<=c&&c<=b)
        cout<<a<<c<<b;
    else if(b<=a&&a<=c)
        cout<<b<<a<<c;
    else if(b<=c&&c<=a)
        cout<<b<<c<<a;
    else if(c<=a&&a<=b)
        cout<<c<<a<<b;
    else if(c<=b&&b<=a)
        cout<<c<<b<<a;

    //������
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
    cout<<a<<b<<c;
    return 0;
}
