#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int k, n;
    cin >> n >> k;
    vector<int> a(n);
    ll suma = 0;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
        suma += a[i];
    }
    auto good = [&](ll sum) 
    {
    int seg = 1;
    ll temp = 0;
    bool flag = 1;
    for(int i=0; i<n; i++) 
    {
        if(a[i] > sum) 
        {
            flag = 0; 
            break;
        }
        if(temp + a[i] <= sum) 
        {
            temp += a[i];
        } else {
            temp = a[i];
            seg++;
        }
    }
    if(flag == 1) 
    {
        return seg <= k;
    } else 
    {
        return false;
    }
    };
    ll l = 0, r = suma+100;
    while(l+1 < r) 
    {
        ll mid = (l+r)/2;
        if(good(mid)) 
        {
            r = mid;
        } else 
        {
            l = mid;
        }
    }
    cout << r << "\n";
    return 0;
}