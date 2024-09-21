#include<bits/stdc++.h>
#include <ostream>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

void solve(){
  	int n, ans;
  	cin>>n;
  	string res = "";
	while(res.size() < n){
    	cout<<"? "<< res << '0' <<endl;
    	cin>>ans;
    	if(ans){
      		res += '0';
    	}else{
     		cout<<"? "<< res << '1' <<endl;
      		cin>>ans;
      		if(ans){
        		res += '1';
      		}else{
        		break;
      		}
    	}
  	}

  	while(res.size() < n){
    	cout << "? " << "0" << res <<endl;
    	cin>>ans;
    	if(ans){
      		res = '0' + res;
    	}else{
      		res = '1' + res;
    	}
  	}

  	cout<<"! "<<res<<endl;

}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
