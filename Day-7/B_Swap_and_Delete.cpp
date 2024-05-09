#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll cnt0=0, cnt1=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(cnt0>0)
                {
                    cnt0--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(cnt1>0)
                {
                    cnt1--;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<cnt0+cnt1<<'\n';
    }
    
    return 0;
}