#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, x, n0 = 0;
    cin>>n;
    for(int i = 0; i < 2*n; i++){
        cin>>x;
        n0 += (x == 1);
    }
    
    int mn = n0 % 2, mx = 0;
    
    if(n0 == 2*n){
        mx = 0;
        mn = 0;
    }else if(n0 <= n){
        mx = n0;
    }else{
        int off = n0 - n;
        mx = n - off;
    }

    cout<<mn<<" "<<mx<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}