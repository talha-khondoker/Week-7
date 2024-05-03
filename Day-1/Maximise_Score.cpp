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
        ll a[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
        ll mx=INT_MIN;
        ll ans=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            ll x=abs(a[i]-a[i+1]);
            ll y=abs(a[i]-a[i-1]);
            mx=max(x,y);
            ans=min(ans, mx);
        }
        ans=min(ans, abs(a[0]-a[1]));
        ans=min(ans, abs(a[n-1]-a[n-2]));
        cout<<ans<<'\n';
    }
    return 0;
}
