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
    vector<int> inp(n);
    for(int &ele:inp) cin>>ele;
    int s = 0, res = 0;
    float sqt;
    for(int i:inp){
        s += i;
        sqt = sqrt(s);
        if(sqt * sqt == s && (int)sqt % 2) res++;
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
