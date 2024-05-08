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
        ll n, q;
        cin>>n>>q;
        vector<ll> a(n) , x(q);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<q; i++)
        {
            cin>>x[i];
        }
        set<ll> st;
        for(int i=0; i<q; i++)
        {
            if(st.count(x[i]))
            {
                continue;
            }
            st.insert(x[i]);
            for(int j=0; j<n; j++)
            {
                if(a[j]%(1<<x[i])==0)
                {
                    a[j]+=(1<<(x[i]-1));
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}