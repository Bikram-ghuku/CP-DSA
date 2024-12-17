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
    string s;
    cin>>s;
    unordered_map<char, int> ds;
    for(char c:s) ds[c]++;
    int mx = 0, mi = n;
    char mxc, mic;
    for(auto ele: ds){
        if(ele.second > mx){
            mx = ele.second;
            mxc = ele.first;
        }

    }

    for(auto ele: ds){
        if(ele.second <= mi && ele.first != mxc){
            mi = ele.second;
            mic = ele.first;
        }
    }

    for(int i = 0; i < n; i++){
        if(s[i] == mic){
            s[i] = mxc;
            break;
        }
    }

    cout<<s<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
