/*
    Ï°Ìâ2-2 º«ÐÅµã±ø£¨hanxin£©
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

    int a,b,c,cas=1;
    while(cin>>a>>b>>c)
    {
        cout<<"Case "<<cas++<<":";
        for(int i=10; i<=100; i++)
        {
            if(i%3==a&&i%5==b&&i%7==c)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    /*
    2 1 6
    3 5 7
    2 5 8 11 14 17 20 23 26 29 32 35 38 41 ......
    1 6 11 16 21 26 31 36 41 ......
    6 13 20 27 34 41 ......
    =>num%105=41
    */
    return 0;
}
