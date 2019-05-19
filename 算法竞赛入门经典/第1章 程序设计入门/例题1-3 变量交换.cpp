/*
    变量交换
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    //方法一
    cout<<b<<a;

    //方法二
    int temp;
    temp=a;
    a=b;
    b=temp;

    //方法三
    a=a+b;
    b=a-b;
    a=a-b;

    //方法四
    a^=b^=a^=b;

    return 0;
}
