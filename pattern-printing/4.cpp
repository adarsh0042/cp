#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=3*n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i<=n){
                if(j>=2*n-i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i<=2*n){
                int k=0;
                if(j>=i){
                    cout<<"*"; k=1;
                }
                if(j<=i-n-1){
                    cout<<"*"; k=1;
                }
                if(j==n){
                    cout<<"|"; k=1;
                }
                if(!k) cout<<" ";
            }
            else{
                if(j<=3*n-i+1) cout<<"*";
                else cout<<" ";
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