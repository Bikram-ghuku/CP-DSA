#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, res = 0;
    cin>>n>>x;
    vector<int> ds(n);
    for(int i = 0; i < n; i++) cin>>ds[i];

    sort(ds.begin(), ds.end());
    int l = 0, r = n - 1;
    while(l <= r){
        if(ds[l] + ds[r] <= x){
            res++;
            l++;
            r--;
        }else if(ds[l] + ds[r] > x){
            r--;
            res++;
        }
    }

    cout<<res;
    return 0;
}