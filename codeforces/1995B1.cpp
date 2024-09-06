#include<bits/stdc++.h>
using namespace std;


void solve(){
    int m, n;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());

    int l = n - 1, r = n - 1, m_cp = m, ans;

    while(l >= 0 && r >= 0){
        ans = 0;
        l = r;
        m = m_cp;
        while(l >= 0 && m > 0 && arr[r] - arr[l] <= 1){
            if(l == r && l > 0 && arr[l] - arr[l - 1] > 1) break;
            ans += arr[l];
            m -= arr[l];
            l--;
        }
        if(m == m_cp) r--;
        else{
            cout<<ans<<endl;
            return;
        }
    }

    return;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}