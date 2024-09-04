#include<bits/stdc++.h>

using namespace std;
long long dp[1000010];
const int M = 1e9 + 7;

long long solver(vector<int>& ds, int c) {
    if(c == 0) return 1;

    if(dp[c] != -1) return dp[c];

    int ans = 0;
    for(int num: ds){
        if(num <= c){
            ans = (ans % M + solver(ds, c - num) % M) % M;
        }
    }

    return dp[c] = ans;
}

int main(){

    int n, c;
    cin>>n>>c;
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];
    memset(dp, -1, sizeof(dp));
    cout<<solver(ds, c)<<endl;

    return 0;
}