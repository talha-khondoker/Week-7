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
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
    auto good = [&] (ll x)
    {
        int cnt=1;
        for(int i=0,j=i+1;j<n;)
        {
            if(a[i]+x+x>=a[j])
            {
            j++;
            }
            else
            {
            cnt++;
            i=j;
            j=i;
            }
        }
        return (cnt<4);
    };
        ll l=0, r=1e9;
        ll ans, mid;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(good(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}