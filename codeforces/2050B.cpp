#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    long long s = 0, d;
    for(int i =0; i < n; i++){
        cin>>arr[i];
        s += arr[i];
    }

    if(s % n == 0){
        int f = s / n;
        long long odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            if(i % 2) even += arr[i];
            else odd +=arr[i];
        }
        int e = n / 2;
        int o = n - e;
        if(!(odd % o == 0 && even % e == 0)){
            cout<<"NO"<<endl;
            return;
        }

        if(!(odd / o == f && even / e == f)){
            cout<<"NO"<<endl;
            return;
        }

        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
