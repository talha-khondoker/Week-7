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
        int n, k;
		cin >> n >> k;
		vector<int> x(k);
		for (int i = 0; i < k; i++) cin >> x[i];
		sort(x.begin(), x.end(), greater<int>());
		int cnt = 0;
		ll sum = 0;
		while (cnt < x.size() && sum + n - x[cnt] < n)
		{
			sum += n - x[cnt++];
		}
		cout << cnt << '\n';
    }
    
    return 0;
}