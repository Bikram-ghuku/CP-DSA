#include<bits/stdc++.h>

using namespace std;

int main(){
    string x;
    cin>>x;
    int j = 0, res = -1;
    for(int i = 0; i < x.size(); i++){
        if(x[i] != x[j]) j = i;
        else res = max(res, i - j + 1);
    }

    cout<<res<<endl;
}