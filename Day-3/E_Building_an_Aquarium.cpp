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
        ll n, x;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll l=0, r=1e10;
        ll mid, ans=0;
        while (l<=r)
        {
            mid=(l+r)/2;
            ll wa=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]<mid)
                {
                    wa+=(mid-a[i]);
                }
            }
            if(x>=wa)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}