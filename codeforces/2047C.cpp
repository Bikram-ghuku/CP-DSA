#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> inp(2, vector<int>(n));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin>>inp[i][j];
        }
    }

    int mx = INT_MIN, loc;
    
    for(int i = 0; i < n; i++){
        loc = inp[0][i] + inp[1][i];
        for(int j = 0; j < n; j++){
            if(j != i){
                loc += max(inp[0][j], inp[1][j]);
            }
        }

        mx = max(mx, loc);
    }

    cout<<mx<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
