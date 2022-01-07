// B. Team Composition: Programmers and Mathematicians
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define F first
#define S second
typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a<b){
        swap(a, b);
    }
    ll ans=min((a-b)/2, b);
    b-=ans;
    cout<<b/2+ans<<el;
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

