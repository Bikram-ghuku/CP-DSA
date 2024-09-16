#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

int solver(int n, int l, int m, int r){
    if(n == 1){
        cout<<l<<" "<<r<<endl;
        return 1;
    }

    int x = solver(n - 1, l, r, m);
    x += 1;
    cout<<l<<" "<<r<<endl;
    x += solver(n - 1, m, l, r);

    return x;
}

int main(){
	FASTIO;
    int t;
    cin>>t;

    cout<<(pow(2, t) - 1)<<endl;
    solver(t, 1, 2, 3);

    return 0;
}