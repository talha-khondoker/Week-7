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
        string s;
        cin>>s;
        ll one=0;
        ll zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        ll mn=min(one, zero);
        if(mn%2==0) cout<<"Ramos"<<'\n';
        else cout<<"Zlatan"<<'\n';
    }
    
    return 0;
}