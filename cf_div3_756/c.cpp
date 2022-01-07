// C Polycarp Recovers the Permutation

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    ll maxi = INT_MIN;
    cin >> n;
    ll a[n];
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    if (a[0] != maxi && a[n - 1] != maxi)
        cout << -1 << el;
    else
    {
        if (a[n - 1] == maxi)
        {
            v.pb(a[n - 1]);
            for (ll i = n - 2; i >= 0; i--)
                v.pb(a[i]);
        }
        else
        {

            for (ll i = n - 1; i > 0; i--)
                v.pb(a[i]);
            v.pb(a[0]);
        }

        for (auto &m : v)
            cout << m << " ";
        cout << el;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}