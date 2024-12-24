#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, d;
	cin>>n>>d;

	cout<<1<<" ";
	if(d % 3 == 0 || n >= 3) cout<<3<<" ";
	if(d % 5 == 0) cout<<5<<" ";
	if((n >= 3) || (d == 7)) cout<<7<<" ";
	if((d % 3 == 0 && n >= 3) || (d % 9 == 0) || (n >= 9) || (n >= 6)) cout<<9<<" ";
	cout<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
