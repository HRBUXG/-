#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;


int main()
{
    int T;
    string str;
    cin>>T;
    while(T--)
    {
        cin>>str;
        int len=str.size();
        string ans=str;
        for(int i=1; i<len; i++)
        {
            string left=str.substr(0,i);
            string right=str.substr(i,len);
            if(right+left<ans)
                ans=right+left;
        }
        cout<<ans<<endl;
    }
}
