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
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];

    for(int i = 1; i < n; i++){
        int diff = abs(ds[i - 1] - ds[i]);
        if(diff != 7 && diff != 5){
            cout<<"NO"<<endl;
            return;
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
