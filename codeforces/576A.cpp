#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    
    vector<int> res_arr;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            int x = i;
            while(x <= n){
                res_arr.push_back(x);
                x *= i;
            }
        }
    }
    
    cout << res_arr.size() << endl;
    for(int ele : res_arr) cout << ele << " ";
    return 0;
}