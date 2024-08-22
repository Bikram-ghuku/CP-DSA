#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    set<int> ds;
    for(int i = 0; i < n; i++){
        cin>>x;
        ds.insert(x);
    }

    cout<<ds.size()<<endl;
    return 0;
}