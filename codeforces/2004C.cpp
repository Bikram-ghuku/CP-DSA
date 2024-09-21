#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];
    
    sort(ds.begin(), ds.end());
    int a = 0, b = 0, m = -1, rem;
    for(int i = n - 1; i >= 0; i--){
        if(m == -1) a += ds[i];
        else{
            rem = min(ds[i + 1] - ds[i], k);
            ds[i] += rem;
            b += ds[i];
            k -= rem;
        }

        m *= -1;
    }
    cout<<(a - b)<<endl;
    
    return;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}