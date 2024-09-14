#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7; 

void solve(){
    int n, m, q;
    cin >> n >> m >> q;
    
    vector<int> B(m), A(q);
    for(int i = 0; i < m; i++) cin >> B[i];
    for(int i = 0; i < q; i++) cin >> A[i];
    
    sort(B.begin(), B.end());
    int pos1 = B[0], pos2 = B[1], david = A[0];
    int res = 0;
    
    if(david == pos1 || david == pos2){
        res = 0;
    }
    else if(david > pos2){
        res = n - pos2;
    }
    else if(david < pos1){
        res = pos1 - 1;
    }
    else {
        res = (pos2 - pos1) / 2;
    }
    
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
