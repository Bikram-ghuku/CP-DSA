#include<bits/stdc++.h>

using namespace std;
int dp[1000010];
const int M = 1e9 + 7;

int solver(long long n){
    int dig, res = INT_MAX, i_cp;
    dp[0] = 0;
    for(int i = 1; i < 10; i++){
        dp[i] = 1;
    }

    for(int i = 10; i <= n; i++){
        i_cp = i;
        while(i_cp > 0){
            dig = i_cp % 10;
            if(dig != 0) dp[i] = min(dp[i], dp[i - dig] + 1);
            i_cp /= 10;
        }
    }

    return dp[n];
}

int main(){
    long long n;

    memset(dp, 1, sizeof(dp));
    cin>>n;
    cout<<solver(n)<<endl;
    return 0;
}