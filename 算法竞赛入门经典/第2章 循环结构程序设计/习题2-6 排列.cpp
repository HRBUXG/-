/*
    œ∞Ã‚2-6 ≈≈¡–£®permutation£©
*/

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<limits.h>
#include<time.h>
#include<set>
//#define Local

using namespace std;

int main()
{
#ifdef Local
    freopen("data.in","r",stdin);
    freopen("data.out","r",stdout);
#endif // Local
    set<int> s;
    for(int abc=100; abc<=334; abc++)
    {
        for(int def=200; def<=668; def++)
        {
            for(int ghi=300; ghi<=1000; ghi++)
            {
                if(abc*2==def&&abc*3==ghi)
                {
                    s.clear();
                    s.insert(abc%10);
                    s.insert(abc/10%10);
                    s.insert(abc/100);
                    s.insert(def%10);
                    s.insert(def/10%10);
                    s.insert(def/100);
                    s.insert(ghi%10);
                    s.insert(ghi/10%10);
                    s.insert(ghi/100);
                    if(s.size()==9)
                        cout<<abc<<" "<<def<<" "<<ghi<<endl;
                }
            }
        }
    }
    return 0;
}
