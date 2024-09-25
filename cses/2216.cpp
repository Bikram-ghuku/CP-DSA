#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, x;
    cin>>n;
    vector<int> ds(n + 1);
    for(int i = 0; i < n; i++){
        cin>>x;
        ds[x] = i;
    }
 
    int mx = 1;
    for(int i = 1; i < n; i++){
        if(ds[i] > ds[i + 1]){
            mx++;
        }
    }
 
    cout<<mx<<endl;
 
    return 0;
}