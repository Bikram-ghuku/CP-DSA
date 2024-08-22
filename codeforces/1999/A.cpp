#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, r;
    cin>>n;
    while(n--){
        r = 0;
        cin>>t;
        while(t > 0){
            r += (t % 10);
            t /= 10;
        }

        cout<<r<<endl;
    }
    return 0;
}