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
    vector<int> inp(n);
	for(int &i:inp) cin>>i;

	int nz = 0, ml = 0, l = 0;
	for(int i = 0; i < n; i++){
		nz += (inp[i] == 0);
		if(inp[i] == 0){
			l = 0;
		}else{
			l++;
		}
		ml = max(l, ml);
	}

	if(nz == n){
		cout<<0<<endl;
	}else if((nz == 0)){
		cout<<1<<endl;
	}else{
		int i = 0;
		while(inp[i] == 0){
			i++;
			nz--;
		}
		i = n - 1;
		while(inp[i] == 0){
			i--;
			nz--;
		}
		if(nz == 0) cout<<1<<endl;
		else cout<<2<<endl;
	}
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
