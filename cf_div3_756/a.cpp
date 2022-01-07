// A. Make Even
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin>>a>>b;
    int ans=min((a+b)/4, min(a, b));
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}