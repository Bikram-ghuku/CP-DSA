#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string x;
    cin>>x;
    if(x[0] == x[n - 1]) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}