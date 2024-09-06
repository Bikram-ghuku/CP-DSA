#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, k;
    cin>>x>>y>>k;
    cout<<endl;
    if(k % 2){
        cout<<x<<" "<<y<<endl;
    }

    for(int i = 1; i <= (k / 2); i++){
        cout<<(x + i)<<" "<<(y + i)<<endl;
        cout<<(x - i)<<" "<<(y - i)<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
}