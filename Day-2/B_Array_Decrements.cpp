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
        vector<ll> a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll x=-1, y=-1;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                flag=true;
                break;
            }
            if(b[i]!=0)
            {
                if(x==-1)
                {
                    x=a[i]-b[i];
                }
                else{
                    if(a[i]-b[i]!=x)
                    {
                        flag=true;
                        break;
                    }
                }
            }
            else
            {
                y=max(y,a[i]-b[i]);
            }
        }
        if(flag)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        if(x==-1 or y<=x)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}