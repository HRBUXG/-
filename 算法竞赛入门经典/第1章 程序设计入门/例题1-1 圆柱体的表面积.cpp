/*
    输入：底面半径r和高h
    输出：圆柱体的表面积，保留3位小数
*/
#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    const double pi=acos(-1.0);//pi=4.0*atan(1.0)
    double r,h,s1,s2,s;
    scanf("%lf%lf",&r,&h);
    s1=pi*r*r;
    s2=2*pi*r*h;
    s=s1*2.0+s2;
    printf("Area = %.3f\n",s);
    return 0;
}
