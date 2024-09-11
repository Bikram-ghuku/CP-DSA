#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, pric, temp;
    cin>>n>>m;
    multiset<int> price;
    for(int i = 0; i < n; i++){
        cin>>pric;
        price.insert(pric);
    }

    for (int i = 0; i < m; i++) {
		cin >> temp;
		auto j = price.lower_bound(temp);
		if (*j == temp) {
			cout << *j << '\n';
			price.erase(j);
		} else if (*j != temp && j != price.begin()) {
			j--;
			cout << *j << '\n';
			price.erase(j);
		} else {
			cout << "-1\n";
		}
	}

    return 0;

}