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
    int x;
    unordered_map<int, int> ds;
    for(int i = 0; i < n; i++){
        cin>>x;
        ds[x]++;
    }
    
    int res = 0;
    for(auto ele : ds){
        res += (ele.second / 2);
    }
    
    cout<<res<<endl;
    return;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}