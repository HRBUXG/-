/*
    输入输出实验
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    printf("%d\n",11111*11111);//123454321
    printf("%d\n",111111*111111);//溢出 -539247567
    printf("%d\n",1111111*1111111);//溢出
    printf("%d\n",11111111*11111111);//溢出
    cout<<"------"<<endl;
    printf("%lld\n",111111*111111);//29554412453870641
    printf("%lld\n",1111111*1111111);//溢出
    printf("%.1f\n",1111111.0*1111111);//溢出
    cout<<"------"<<endl;
    printf("%f\n",11111*11111);//1234567198140.215088 精度缺失
    cout<<"------"<<endl;
    printf("%.1f\n",sqrt(-10));//NAN
    cout<<111111*111111;//溢出
    printf("%%d\n");//%%d
    return 0;
}
