// A. Distance

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <string>
using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    int sum=x+y;
    int x1=0,y1=0;
    if(sum %2 != 0)
    {
        cout<<"-1 -1"<<endl;
        return;
    }
    int pt= sum/2;
    if(x>y){
        cout<<pt<<" 0";
    }
    else
        cout<<"0 "<<pt;
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


// B. Special Permutation
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void print(vector<int> &v,int &n) {
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void solve(int &n, int &a, int &b) {
    vector<int> ans(n);
    ans[0] =a;
    ans[n/2]=b;
    int index = 1;

    for(int i = n;i>=1;i--){
        if(i == b && index == n/2) {
            index++;
            continue;
        }
        if(i == a || i == b) {
            continue;
        }
        if(index == n/2) {
            index++;
        }
        ans[index]=i;
        index++;
    }
    if(a == *min_element(ans.begin(), ans.begin() + n/2) && b == *max_element(ans.begin() + n/2, ans.end())) {
        print(ans,n);
        return;
    }
    else {
        cout<<"-1"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        int a, b;
        cin>>n>>a>>b;
        solve(n, a, b);
    }
    return 0;
}