#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
//#define Local

int main()
{
#ifdef Local
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    int standard[1001];
    int guess[1001];
    int n,T,cas=1;
    while(cin>>T&&T)
    {
        int flag=1,AC=0,res1=0,res2=0;
        cout<<"Game "<<cas++<<":"<<endl;
        for(int i=0; i<T; i++)
            cin>>standard[i];
        while(flag)
        {
            int ans=0,AC=0;
            for(int i=0; i<T; i++)
                cin>>guess[i];
            if(guess[0]==0)
            {
                flag=0;
                continue;
            }
            for(int i=0; i<T; i++)
            {
                if(standard[i]==guess[i])
                    AC+=1;
            }
            for(int num=1; num<=9; num++)
            {
                res1=0,res2=0;
                for(int i=0; i<T; i++)
                {
                    if(standard[i]==num)
                        res1+=1;
                    if(guess[i]==num)
                        res2+=1;
                }
                ans+=(res1<res2?res1:res2);
            }
            cout<<"    ("<<AC<<","<<ans-AC<<")"<<endl;
        }
    }
}
