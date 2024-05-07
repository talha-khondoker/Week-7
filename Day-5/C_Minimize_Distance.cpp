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
        ll n, k;
        cin>>n>>k;
        vector<ll> pos,neg;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {
                pos.push_back(x);
            }
            else if(x<0)
            {
                ll y=(-1)*x;
                neg.push_back(y);
            }
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        reverse(pos.begin(), pos.end());
        reverse(neg.begin(), neg.end());
        ll ans=0;
        for( int i=0;i<pos.size();i+=k)
        {
            ans+=2*pos[i];
        }
        for( int i=0;i<neg.size();i+=k)
        {
            
            ans+=2*neg[i];
        }
        ll mx1=0;
        if(!pos.empty())
        {
            mx1=*max_element(pos.begin(), pos.end());
        }
        ll mx2=0;
        if(!neg.empty())
        {
            mx2=*max_element(neg.begin(), neg.end());
        }
        
        ans-=max(mx1, mx2);
        cout<<ans<<'\n';
    }
    
    return 0;
}