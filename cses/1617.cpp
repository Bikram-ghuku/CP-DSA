#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    long long int ds = 1;
    while(n--){
        ds = (ds * 2) % MOD;
    }
    cout<<ds;
}