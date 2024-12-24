#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, sx, px;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'p'){
            for(int j = n - 1; j >= i; j--){
                if(s[j] == 's'){
                    sx = n - j;
                    px = i + 1;

                    if(sx >= px){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    }

    cout<<"YES"<<endl;
    return;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
