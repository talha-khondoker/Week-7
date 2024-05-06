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
        ll n;
        cin>>n;
        ll check[n+1];
        ll a[n];
        vector<ll> b, c;
        
        for(int i=0; i<=n; i++)
        {
            check[i]=false;
        }
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=n)
            {
                if(check[a[i]]==false)
                {
                    check[a[i]]=true;
                }
                else
                {
                    b.push_back(a[i]);
                }
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        
        for(int i=1; i<=n; i++)
        {
            if(check[i]==false)
            {
                c.push_back(i);
            }
        }
        sort(b.begin(), b.end());
        
        ll m=b.size();
        
        ll cnt=0;
        for(int i=0; i<m; i++)
        {
            if(2*c[i]>=b[i])
            {
                cnt++;
                break;
            }
        }
        
        if(cnt==0)
        {
            cout<<m<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
        
    }
    return 0;
}