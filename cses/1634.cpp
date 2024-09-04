#include<bits/stdc++.h>

using namespace std;

int solver(vector<int>& ds, int c) {
    vector<long long> dp(c + 1, INT_MAX);  
    dp[0] = 0;

    for (int i = 1; i <= c; i++) {
        for (int j = 0; j < ds.size(); j++) {
            if (ds[j] <= i && dp[i - ds[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - ds[j]] + 1);
            }
        }
    }

    return dp[c] == INT_MAX ? -1 : dp[c];
}

int main(){

    int n, c;
    cin>>n>>c;
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];

    cout<<solver(ds, c)<<endl;

    return 0;
}