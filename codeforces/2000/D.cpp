#include<bits/stdc++.h>
using namespace std;

int helper(string s, vector<int> a, int l, int r){

    return 0;
}

void solve(){
    int n, x;
    cin>>n;
    vector<int> a(n + 1);
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        cin>>x;
        a[i] = a[i - 1] + x;
    }
    string s;
    cin>>s;

    int l = 0, r = n - 1, res = 0;
    while(l < r){
        while(l < n && s[l] != 'L') l++;
        while(r > 0 && s[r] != 'R') r--;

        if(l < r){
            res += (a[r + 1] - a[l]);
            l++;
            r--;
        }
    }

    cout<<res<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}