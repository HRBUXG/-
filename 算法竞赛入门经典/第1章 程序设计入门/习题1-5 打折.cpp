/*
    œ∞Ã‚1-5 ¥Ú’€£®discount£©
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int price=n*95;
    if(price>=300)
        price*=0.85;
    cout<<price<<endl;

    return 0;
}
