#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    string s;
    cin>>s;

    int n = s.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(9, false));

    dp[0][0] = true;
    
    for(int i = 0; i < n; i++){
        int ele = s[i] - '0';
        for(int j = 0; j < 9; j++){
            if(dp[i][j]){
                dp[i + 1][(ele + j) % 9] = true;
                if(ele <= 3){
                    dp[i + 1][(j + ele * ele) % 9] = true;
                }
            }
        }
    }

    if(dp[n][0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
