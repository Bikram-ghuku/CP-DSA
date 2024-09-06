#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>>n;
    vector<int> inp(n), ds(n, 0);
    for(int i = 0; i < n; i++){
        cin>>inp[i];
    }

    ds[inp[0] - 1] = 1;
    for(int i = 1; i < n; i++){
        if(inp[i] == 1 && ds[1] == 0){
            cout<<"NO"<<endl;
            return;
        }else if(inp[i] == n && ds[n - 2] == 0){
            cout<<"NO"<<endl;
            return;
        }else if(ds[inp[i] - 2] == 0 && ds[inp[i]] == 0){
            cout<<"NO"<<endl;
            return;
        }else{
            ds[inp[i] - 1] = 1;
        }
    }

    cout<<"YES"<<endl;
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}