/*
    计算并输出8/5的值，保留小数点后1位
*/

#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    printf("%.1f\n",8.0/5.0);//1.6
    printf("%.2f\n",8.0/5.0);//1.60
    printf("%.1f\n",8/5);//1.6
    printf("%f\n",8/5);//1.599999
    printf("%d\n",8.0/5.0);//-1717986918
}
