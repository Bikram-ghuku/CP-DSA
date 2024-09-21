#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, x, y;
    cin>>n;
    cin>>x>>y;
    int mn = x < y ? x : y;

    int res = n / mn + (n % mn != 0);
    cout<<res<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}