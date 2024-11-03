#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

bool cmp(pair<int, int>& a, pair<int, int>& b) { 
    return a.second > b.second; 
} 

void solve(){
    int n, k, a, b;
    cin>>n>>k;
    unordered_map<int, int> ds;
    while (k--){
        cin>>a>>b;
        ds[a] += b;
    }
    

    vector<pair<int, int>> dsf(ds.begin(), ds.end());

    sort(dsf.begin(), dsf.end(), cmp);
    
    int res = 0;
    for(int i = 0; i < n && i < dsf.size(); i++){
        res += dsf[i].second;
    }

    cout<<res<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
