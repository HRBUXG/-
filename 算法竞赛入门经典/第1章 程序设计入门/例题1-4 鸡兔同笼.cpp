/*
    鸡兔同笼
    输入：总数量n,总腿数m
    输出：各自数量
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int chicken=(4*n-m)/2;
    int rabbit=n-chicken;
    if(m%2==1||chicken<0||rabbit<0)
        cout<<"No answer"<<endl;
    else
        cout<<chicken<<" "<<rabbit<<endl;

    return 0;
}
