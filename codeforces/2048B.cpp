#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
    int n, k;
    cin>>n>>k;

	vector<int> arr(n);
	for(int i = 1; i <= n; i++) arr[i - 1] = i;

	int l = 0, r = n - 1;
	while(l <= r){
		for(int i = 0; i < k - 1 && r >= l + 1; i++){
			cout<<arr[r]<<" ";
			r--;
		}
		cout<<arr[l]<<" ";
		l++;
	}
	cout<<endl;
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
