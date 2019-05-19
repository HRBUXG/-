#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

string str;
map<char,char> mapValue;
char ss[]="BCDFGKNPQR4679";
void init()
{
    mapValue.insert(make_pair('A','A'));
    mapValue.insert(make_pair('E','3'));
    mapValue.insert(make_pair('H','H'));
    mapValue.insert(make_pair('I','I'));
    mapValue.insert(make_pair('J','L'));
    mapValue.insert(make_pair('L','J'));
    mapValue.insert(make_pair('M','M'));
    mapValue.insert(make_pair('O','O'));
    mapValue.insert(make_pair('S','2'));
    mapValue.insert(make_pair('T','T'));
    mapValue.insert(make_pair('U','U'));
    mapValue.insert(make_pair('V','V'));
    mapValue.insert(make_pair('W','W'));
    mapValue.insert(make_pair('X','X'));
    mapValue.insert(make_pair('Y','Y'));
    mapValue.insert(make_pair('Z','5'));
    mapValue.insert(make_pair('1','1'));
    mapValue.insert(make_pair('2','S'));
    mapValue.insert(make_pair('3','E'));
    mapValue.insert(make_pair('5','Z'));
    mapValue.insert(make_pair('8','8'));
}
int isPalin(string s)
{
    int flag=1;
    for(int i=0; i<s.length()/2; i++)
    {
        if(s[i]!=s[s.length()-1-i])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int isRever(string s)
{
    string s_copy=s;
    int flag=0;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<strlen(ss); j++)
        {
            if(s[i]==ss[j])
                return flag;
        }
    }
    for(int i=0; i<s.length(); i++)
        s[i]=mapValue[s[i]];
    reverse(s.begin(),s.end());
    //cout<<"isRever "<<s<<endl;
    if(s==s_copy)
        flag=1;
    return flag;
}
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    init();
    while(getline(cin,str))
    {
        int flag_palin=isPalin(str);
        int flag_rever=isRever(str);
        cout<<str;
        if(flag_palin==0&&flag_rever==0)
            cout<<" -- is not a palindrome."<<endl<<endl;
        else if(flag_palin==1&&flag_rever==0)
            cout<<" -- is a regular palindrome."<<endl<<endl;
        else if(flag_palin==0&&flag_rever==1)
            cout<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<" -- is a mirrored palindrome."<<endl<<endl;
    }
}
