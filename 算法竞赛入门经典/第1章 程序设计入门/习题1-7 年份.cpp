/*
    ϰ��1-7 ��ݣ�year��
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int isLeap(int year)
{
    int flag=0;
    if((year%4==0&&year%100!=0)||(year%400==0))
        flag=1;
    return flag;
}

int main()
{
    int year;
    cin>>year;
    if(isLeap(year))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
