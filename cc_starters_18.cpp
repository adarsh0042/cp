// Make them equal 
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int, int> m;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        m[v[i]]++;
    }
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    cout<<max-min<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

// Compare those strings 
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <string>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    bool tillNow = b[n-1] > a[n-1];
    int count=0;
    if(tillNow) count++;

    for(int i=n-2;i>=0;i--){
        if(b[i]>a[i]){
            tillNow = true;
            count++;
        }
        else if(b[i] < a[i]){
            tillNow = false;
        }
        else{
            if(tillNow) count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}

// Palindromic Binary Numbers 
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> pal{0, 1, 3, 5, 7, 9, 15, 17, 21, 27, 31, 33, 45, 51, 63, 65, 73, 85, 93, 99, 107, 119, 127, 129, 153, 165, 189, 195, 219, 231, 255, 257, 273, 297, 313, 325, 341, 365, 381, 387, 403, 427, 443, 455, 471, 495, 511, 513, 561, 585, 633, 645, 693, 717, 765, 771, 819, 843};

void solve() {
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=pal.size()-1;i>=0;i--){
        if(n==0) break;
        while(pal[i] <= n) {
            ans.push_back(pal[i]);
            n -= pal[i];
        }
    }
    int size=ans.size();
    cout<<size<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }
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