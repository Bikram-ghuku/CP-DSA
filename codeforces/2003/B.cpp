#include<bits/stdc++.h>
using namespace std;

// Wrong answer on pretest 2

void solve(){
    int n;
    cin>>n;
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];

    int curr = 1;
    for (int i = 1; i < n; i++) {
        if (curr == 1) {
            ds[0] = max(ds[i], ds[0]);
        } else {
            ds[0] = min(ds[i], ds[0]);
        }
        curr *= -1;
    }

    cout<<ds[0]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}