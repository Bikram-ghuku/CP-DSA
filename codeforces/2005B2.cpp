#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

void solve(){
    int n, m, q;
    cin>>n>>m>>q;
    vector<int> B(m), A(q);
    for(int i = 0; i < m; i++) cin>>B[i];
    for(int i = 0; i < q; i++) cin>>A[i];
    int res, l, r;
    sort(B.begin(), B.end());
    for(int a : A){
        res = 0;
        if(a < B[0]){
            res = B[0] - 1;
        }else if(a > B[m - 1]){
            res = n - B[m - 1];
        }else{
            auto itl = lower_bound(B.begin(), B.end(), a) - 1;
            auto itu = itl + 1;
            res = (*itu - *itl) / 2;
        }
        cout<<res<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}