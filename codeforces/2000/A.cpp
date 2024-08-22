#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string x = to_string(n);
    int ds = 0;
    if(!(x[0] == '1' && x[1] == '0' && x[2] != '0')){
        cout<<"NO"<<endl;
        return;
    }
    for(int j = 2; j < x.size(); j++){
        ds = ds * 10 + (x[j] - '0');
    }

    if(ds >= 2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}