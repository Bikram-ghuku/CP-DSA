#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;

    vector<pair<int, int>> inp(n);

    for(int i = 0; i < n; i++){
        cin>>inp[i].first;
        inp[i].second = (i + 1);
    }

    sort(inp.begin(), inp.end());

    int l = 0, r = n - 1;
    while(l < r){
        if(inp[l].first + inp[r].first < x){
            l++;
        }else if(inp[l].first + inp[r].first > x){
            r--;
        }else{
            cout<<(inp[l].second)<<" "<<(inp[r].second)<<endl;
            return 0;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}