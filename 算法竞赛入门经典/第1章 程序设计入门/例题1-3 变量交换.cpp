/*
    ��������
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

    //����һ
    cout<<b<<a;

    //������
    int temp;
    temp=a;
    a=b;
    b=temp;

    //������
    a=a+b;
    b=a-b;
    a=a-b;

    //������
    a^=b^=a^=b;

    return 0;
}
