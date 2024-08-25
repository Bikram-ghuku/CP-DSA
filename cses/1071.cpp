#include<bits/stdc++.h>
using namespace std;

long long diag(long long n){
    return n*n - n + 1;
}
int main(){
    long long n, l, r, f;
    cin>>n;
    while (n--)
    {
        cin>>l>>r;

        if(l > r){
            f = diag(l);
            if(l % 2 == 1) cout << f - l + r<<endl;
            else cout<<f - r + l<<endl;
        }else if(r > l){
            f = diag(r);
            if(r % 2 == 1) cout << f + r - l<<endl;
            else cout<<f - r + l<<endl;
        }else cout<<diag(l)<<endl;
    }
    
}