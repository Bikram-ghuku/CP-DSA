#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, l, r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        int i;
        for(i = 1; l + i <= r; l += i, i++);
        cout<<i<<endl;
    }
}