/*
    ϰ��2-1 ˮ�ɻ�����daffodil��
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>
#include<time.h>
//#define Local

using namespace std;

int main()
{
#ifdef Local
    freopen("data.in","r",stdin);
    freopen("data.out","r",stdout);
#endif // Local

    for(int i=100; i<=999; i++)
    {
        if(i==i%10*100+i/10%10*10+i/100)
            cout<<i<<endl;
    }
    //��Ϊˮ�ɻ������ĸ�  153 370 371 407
    return 0;
}
