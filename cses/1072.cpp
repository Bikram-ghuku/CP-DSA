#include<bits/stdc++.h>

using namespace std;
long long calc(int a){
    long long tot = (long long)a * a * (a * a - 1) / 2;
    long long bad = 4 * (a - 1) * (a - 2);

    return tot - bad;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout<<calc(i)<<endl;
    }
    return 0;
}