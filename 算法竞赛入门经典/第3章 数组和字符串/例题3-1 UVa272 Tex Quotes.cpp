#include<iostream>
#include<cstdio>
#include<cmath>
#include<limits>
#include<memory.h>
#include<set>
#include<cstring>
using namespace std;
//#define Local
char str[10000001];
int main()
{
#ifdef Local
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int times=1;
    while(gets(str)!=NULL)
    {
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]=='"')
            {
                if(times)
                    cout<<"``";
                else
                    cout<<"''";
                times=!times;
            }
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
