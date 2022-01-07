#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int i,j;
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i && k){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
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