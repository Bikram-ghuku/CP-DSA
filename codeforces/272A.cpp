#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;


int main(){
    int n, st, res, x;
    cin>>n;
    st = 0;
    res = 0;
    for(int i = 0; i < n; i++){
        cin>>x;
        st += x;
    }

    res = 0;
    for(int i = 1; i <= 5; i++){
        if((st + i) % (n + 1) != 1){
            res++;
        }
    }

    cout<<res<<endl;

    return 0;
}