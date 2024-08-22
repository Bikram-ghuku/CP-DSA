#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n, sum = 0, x;
	cin>>n;
	for(int i = 1; i < n; i++){
		cin>>x;
		sum += x;
	}
	
	cout<<(((long long)n * (long long)(n + 1) / 2) - sum)<<endl;
	
	return 0;
}
