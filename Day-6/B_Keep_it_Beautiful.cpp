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
        ll n;
        cin>>n;
        vector<ll> a(n), taken;
        string ans="";
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(taken.empty())
            {
                ans.push_back('1');
                taken.push_back(a[i]);
            }
            else
            {
                if(flag)
                {
                    if(a[i]<taken.back())
                    {
                        ans.push_back('0');
                    }
                    else
                    {
                        if(a[i]>taken[0])
                        {
                            ans.push_back('0');
                        }
                        else
                        {
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }
                }
                else
                {
                    if(a[i]>=taken.back())
                    {
                        ans.push_back('1');
                        taken.push_back(a[i]);
                    }
                    else
                    {
                        if(a[i]>taken[0])
                        {
                        ans.push_back('0');
                        }  
                        else
                        {
                            flag=true;
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }
                }
            }
        }
            cout<<ans<<'\n';
    }
    
    return 0;
}