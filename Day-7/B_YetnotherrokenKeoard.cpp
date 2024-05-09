#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll> sl, cl;
        vector<bool> bad(n+5, true);
        for(int i=0; i<n;i ++)
        {
            if(s[i]=='B')
            {
                if(!cl.empty())
                {
                    bad[cl.back()]=false;
                    cl.pop_back();
                }
                bad[i]=false;
            }
            else if(s[i]=='b')
            {
                if(!sl.empty())
                {
                    bad[sl.back()]=false;
                    sl.pop_back();
                }
                bad[i]=false;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                cl.push_back(i);
            }
            else
            {
                sl.push_back(i);
            }
            
        }
        for(int i=0; i<n; i++)
            {
                if(bad[i])
                {
                    cout<<s[i];
                }
            }
            cout<<'\n';
    }
    return 0;
}