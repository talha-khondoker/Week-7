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
      ll n, k;
      cin>>n>>k;
      vector<ll> a(n);
      ll sum=0;
      ll tsum=n*(n+1)/2;
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
      a.push_back(tsum-sum);
      k=k%(n+1);
      for(int i=0; i<n; i++)
      {
        cout<<a[(i-k+n+1)%(n+1)]<<" ";
      }
      cout<<'\n';
    }
    return 0;
}