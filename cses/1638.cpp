#include<bits/stdc++.h>

using namespace std;
long long dp[1010][1010];
const int M = 1e9 + 7;
char ds[1010][1010];
long long solver(int i, int j){
    if(i < 0 || j < 0) return 0;
    if(ds[i][j] == '*') return 0;
    if(i == 0 && j == 0) return 1;


    if(dp[i][j] != -1) return dp[i][j];
    
    long long ans = 0;
    ans = (ans % M + solver(i - 1, j) % M);
    ans = (ans % M + solver(i, j - 1) % M);
    return dp[i][j] = ans % M;

}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vector<string> inp(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin>>ds[i][j];
    }

    cout<<solver(n - 1, n - 1);
    return 0;
}