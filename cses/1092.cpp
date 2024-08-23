#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long tot = (long long) n * (n + 1) / 2, part;
    if(tot % 2 == 1){
        cout<<"NO"<<endl;
    }else{
        part = tot / 2;
        vector<int> ds(n);
        for(int i = 0; i < n; i++){
            ds[i] = i + 1;
        }

        

    
        cout<<"YES"<<endl;
    }

}