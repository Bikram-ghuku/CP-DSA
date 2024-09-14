#include <bits/stdc++.h>

using namespace std;

typedef struct {
	long long begin;
	long long end;
} Movie;

int comp(Movie a, Movie b){
	return b.end > a.end;
}

int main(){
	int n;
	cin>>n;

	vector<Movie> ds(n);

	for(int i = 0; i < n; i++) cin>>ds[i].begin>>ds[i].end;

	sort(ds.begin(), ds.end(), comp);
	
	int res = 1;
	Movie curr = ds[0];
	for(Movie x : ds){
		if(x.begin >= curr.end){
			curr = x;
			res++;
		}
	}

	cout<<res;
	return 0;
}
