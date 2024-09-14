#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, mean;
    cin>>n;
    vector<int> ds(n);
    for(int i = 0; i < n; i++)cin>>ds[i];
    sort(ds.begin(), ds.end());
    mean = ds[n / 2];
    long long int res = 0;
    for(int i = 0; i < n; i++){
        res += abs(ds[i] - mean);
    }
    cout<<res<<endl;
    return 0;
}