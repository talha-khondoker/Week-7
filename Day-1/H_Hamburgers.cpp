#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll nb, ns, nc;
    ll pb, ps, pc;
    ll r;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll lb = 0,  lc = 0,  ls = 0;
    ll n=s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            lb++;
        }
        else if(s[i]=='C')
        {
            lc++;
        }
        else
        {
            ls++;
        }
    }
    auto price = [&](ll mid)
    {
        ll ppb = max(mid*lb - nb, (ll)0);
        ll ppc = max(mid*lc - nc, (ll)0);
        ll pps = max(mid*ls - ns, (ll)0);
        ll p = ppb*pb + ppc*pc + pps*ps;
        return p;
    };
    ll l=0;
    ll rr = r + 1000, mid=0, ans=0;
    while (l<=rr)
    {
        mid=(l+rr)/2;
        if(price(mid)==r)
        {
            cout<<mid<<'\n';
            return 0;
        }
        if(price(mid)>r)
        {
            rr=mid-1;
        }
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    cout<<ans<<'\n';
    return 0;
}