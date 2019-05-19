#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

char str[100000001];
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    while(gets(str)!=NULL)
    {
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ')
                cout<<str[i];
            else
            {
                int j=0;
                while(j<strlen(s))
                {
                    if(str[i]!=s[j])
                        j++;
                    else
                    {
                        cout<<s[j-1];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
}
