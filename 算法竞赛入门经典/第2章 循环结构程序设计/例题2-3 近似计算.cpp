/*
    例题2-3 近似计算
    PI/4=1-1/3+1/5-1/7+......
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>

using namespace std;

int main()
{
    double sum=0;
    for(int i=0;; i++)
    {
        double term=1.0/(i*2+1);
        if(i%2==0)
            sum+=term;
        else
            sum-=term;
        if(term<1e-6)//满足精度要求
            break;
    }
    printf("%.6f\n",sum);

    return 0;
}
