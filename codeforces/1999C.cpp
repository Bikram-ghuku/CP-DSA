#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, res, n, s, m;
    cin>>t;
    while(t--){
        cin>>n>>s>>m;
        bool flag = false;
        vector<pair<int, int>> ds(n);
        for(int i = 0; i < n; i++){
            cin>>ds[i].first>>ds[i].second;
        }

        sort(ds.begin(), ds.end());
        cout<<" "<<endl;
        if(ds[0].first >= s) flag = true;
        for(int i = 0; i < n - 1 && !flag; i++){
            if(ds[i + 1].first - ds[i].second >= s){
                flag = true;
                break;
            }
        }

        if(m - ds[n - 1].second >= s) flag = true;

        cout<<(flag ? "YES" : "NO")<<endl;
    }

    return 0;
}