/*
    ��λ����ת
*/

#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    string str;
    int n;
    scanf("%d",&n);
    //����һ
    printf("%d%d%d\n",n%10,n/10%10,n/100);

    //������
    printf("%d\n",(n%10)*100+(n/10%10)*10+n/100);

    //������
    cin>>str;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
