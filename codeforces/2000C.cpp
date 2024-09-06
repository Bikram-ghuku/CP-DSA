#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    cin>>m;
    string s;
    bool flag;
    for(int i = 0; i < m; i++){
        unordered_map<char, int> ds1;
        unordered_map<int, char> ds2;
        cin>>s;
        flag = true;
        if(s.size() != n) flag = false;
        for(int j = 0; j < n && flag; j++){
            if(ds1.find(s[j]) == ds1.end()) ds1[s[j]] = a[j];
            else{
                if(ds1[s[j]] != a[j]){
                    flag = false;
                    break;
                }
            }
            if(ds2.find(a[j]) == ds2.end()) ds2[a[j]] = s[j];
            else{
                if(ds2[a[j]] != s[j]){
                    flag = false;
                    break;
                }
            }
        }

        cout<<(flag ? "YES" : "NO")<<endl;
        
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}