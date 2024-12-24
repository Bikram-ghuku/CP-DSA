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
    vector<string> inp(n);
    int x = 0;
    for(int i = 0; i < n; i++){
        cin>>inp[i];
    }

    for(int i = 0; i < n; i++){
        if(m < inp[i].size()) break;
        m -= inp[i].size();
        x++;
    }

    cout<<x<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
