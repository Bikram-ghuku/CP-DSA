#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, x;
    cin>>n;
    vector<int> ds(n);
    for(int i = 0; i < n; i++){
        cin>>ds[i];
    }
    int f = n - 2;
    unordered_map<int, int> dsum;
    for(int i = 0; i < n; i++){
        if(dsum.find(ds[i]) != dsum.end()){
            cout<<ds[i]<<" "<<(f/ds[i])<<endl;
            return;
        }
        
        if(f % ds[i] == 0){
            dsum[f / ds[i]] = i;
        }
        
    }
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
