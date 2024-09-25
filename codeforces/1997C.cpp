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
    s[0] = '(';
    int op = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(op > 0) s[i] = ')';
            else s[i] = '(';
        }
        if(s[i] == ')') op--;
        else op++;
    }
    stack<int> ds;
    int res = 0, x;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') ds.push(i);
        else{
            x = ds.top();
            ds.pop();
            res += (i - x);
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
