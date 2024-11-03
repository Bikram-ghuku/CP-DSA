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
    if(n == 1){
        cout<<1<<endl<<1<<endl;
    }else if(n > 1){
        if(k == 1 || k == n) cout<<-1<<endl;
        else{
            cout<<3<<endl;
            int p1 = k - k % 2, p2 = k + 1 + k % 2;
            cout<<"1 "<<p1<<" "<<p2<<endl;
        }
    }
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
