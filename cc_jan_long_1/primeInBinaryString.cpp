#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
typedef long long ll;
typedef long double ld;

ll max(ll a, ll b){
    if(a>b)
        return a;
    return b;
}
ll min(ll a, ll b){
    if(a>b)
        return b;
    return a;
}
void solve(){
    string str;
    cin>>str;
    string ans="yes";
    int b=str.find("10");
    int c=str.find("11");
    if(b==-1 && c==-1) ans="no";
    cout<<ans<<el;
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