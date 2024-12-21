#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> inp(m);
    for(auto &i:inp) cin>>i;
    
    int mn = 0, mx = 0, n_cp = n, i = 0;

    vector<int> icp = inp;

    while(n--){
        auto mne = min_element(icp.begin(), icp.end());
        mn += (*mne);
        *mne -= 1;
        if(*mne == 0) icp.erase(mne);
    }
    

    while(n_cp--){
        auto mxe = max_element(inp.begin(), inp.end());
        mx += (*mxe);
        *mxe -= 1;
    }
    
    cout<<mx<<" "<<mn<<endl;
}

int main(){
		FASTIO;
		solve();

    return 0;
}
