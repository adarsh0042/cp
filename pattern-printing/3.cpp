#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n ){
                cout<<"* ";
            }
            else{
                if((i>=3 && j>=3 && j<=n-2 && i<=n-2) && (i==3 || i==n-2 || j==3 || j==n-2))
                cout<<"* ";
                else
                cout<<"  ";
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