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
        int n;            
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll> freq(n+2,0);
        for(int i=0;i<n;i++)
        {
            if(a[i]>n)continue;
            freq[a[i]]++;
        }
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ll y=0;
            for(ll x=1;x*x<=i;x++)
            {
                if(i%x==0)
                {
                y+=freq[x];
                if(x*x!=i)
                {
                    y+=freq[i/x];
                }
                }
            }
            ans=max(ans,y);
        }    
        cout<<ans<<'\n';
        }
    
    return 0;
}