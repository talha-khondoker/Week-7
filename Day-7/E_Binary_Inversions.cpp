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
        auto good =[&] ()
        {
            ll cnt=0,one=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==1)
                {
                    one++;
                }
                else
                {
                    cnt+=one;
                }
            }
            return cnt;
        };
        ll ans=good();
        ll idx=-1;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                idx=i;
                break;
            }
        }
        ans=max(ans, good());
        if(idx!=-1)
        {
            a[idx]=0;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        ans=max(ans, good());
        cout<<ans<<'\n';
    }
    
    return 0;
}