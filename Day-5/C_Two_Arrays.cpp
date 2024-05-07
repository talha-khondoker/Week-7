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
        vector<ll> a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool flag=true;
        for(int i=0; i<n;i++)
        {
            if((a[i]!=b[i]))
            {
                if((a[i]+1!=b[i]))
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}