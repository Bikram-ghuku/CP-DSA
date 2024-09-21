#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, k, res = INT16_MAX, x, kc;
    cin>>n>>k;
    vector<int> ds(n);
    if(k == 4){
        for(int i = 0; i  < n; i++){
            cin>>x;
            
        }

        return;
    }else {
        for(int i = 0; i < n; i++){
            cin>>x;
            if(x < k) res = min(res, k - x);
            else if(x == k) res = 0;
            else{
                kc = k;
                while(kc < x){
                    kc += k;
                }

                res = min(res, kc - x);
            }
        }
    }

    cout<<res<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
