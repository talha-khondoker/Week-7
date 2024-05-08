#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
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
        ll ans=0, cur=1;
        while(k)
        {
            if(k % 2)
            {
                ans += cur; 
                ans %= mod;
            }
            cur *= n; 
            cur %= mod;
            k /= 2;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}