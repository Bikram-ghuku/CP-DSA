#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int x, y, k;
    cin>>x>>y>>k;
    
    int nr = y / k + (y % k != 0), nl = x / k + (x % k != 0);
    
    cout<<max(2 * nr, 2 * nl - 1)<<endl;
    
    return;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
