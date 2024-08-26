#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int nf = 0;
    for(int i = 5; n / i >= 1; i *= 5){
        nf += n / i;
    }
    cout<<nf<<endl;
    return 0;
}