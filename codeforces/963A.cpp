#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, ret;
    cin>>t;
    string s;
    unordered_map <char, int> d;
    while(t--){
        ret = 0;
        d = {};
        cin>>n;
        cin>>s;
        for(int i = 0; i < 4*n; i++){
            d[s[i]]++;
        }

        for(auto i : d){
            if(i.first != '?'){
                if(i.second >= n){
                    ret += n;
                }else{
                    ret += i.second;
                }
            }
        }

        cout<<ret<<endl;
    }
    
    return 0;
}