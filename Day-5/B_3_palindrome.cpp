#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s[] = {"b","b","a","a"};
    ll i=0, j=0;
    while (i<n)
    {
        cout<<s[j];
        j++, i++;
        if(j == 4)
        {
            j = 0;
        }
    }
    
    // for(int i=0; i<n; i++){
    //     cout<<s[j];
    //     j++;
    //     if(j == 4)
    //     {
    //         j = 0;
    //     }
    // }
    cout<<endl;
    return 0;
}