#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector <ll> a(n), b(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) 
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<ll>());
    auto good = [&]( ll x ) 
    {
    ll cnt = 0;
    int i = 0, j = 0;
    while( i < n && j < n) 
    {
        if( a[i] + b[j] >= x) 
        {
            j++;
        } else 
        {
            i++;
            cnt += (n-j);
        }
    }
    return cnt < k;
    };
    ll l = 1, r = 2e9 + 10;
    for (int i = 0; i < 80; i++) 
    {
        ll mid = (l + r)/2;
        if( good(mid) ) 
        {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
    return 0;
}
