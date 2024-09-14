#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<char> vow = {'a', 'e', 'i', 'o', 'u'};
    string res = "";
    for(int i = 0; i < n; i++){
        res += vow[i % 5];
    }
    sort(res.begin(), res.end());
    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}