#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;


int main(){
    int n;
    cin>>n;
    int res = 0, a, b, c;
    while(n--){
        cin>>a>>b>>c;
        if(a + b + c >= 2) res++;
    }

    cout<<res<<endl;
    return 0;
}