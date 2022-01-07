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
    ll n, d, sum;
    cin>>n>>d;
    
    if(d>10){
        if(d>20){
            sum=n;
        }
        else{
            sum=pow(2,10)*pow(3,d-10);
        }
    }
    else{
        sum=pow(2,d);
    }
    if(sum>=n) sum=n;
    cout<<sum<<el;
 
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