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
    vector<long long> ds(n);
    for(int i = 0; i < n; i++){
        cin>>ds[i];
    }

    if(n == 1){
        cout<<ds[1];
        return;
    }
    if(n == 2){
        cout<<ds[1] - ds[0]<<endl;
        return;
    }

    for(int i = 0; i < n - 2; i++){
        ds[n - 2] -= ds[i];
    }

    cout<<ds[n - 1] - ds[n - 2] <<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}