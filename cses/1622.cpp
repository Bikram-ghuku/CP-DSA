#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

vector<string> p;

int solver(string s, int i = 0) {
    int n = s.size();
    if (i >= n) return 0;
    if (i == n - 1) {
        p.push_back(s);
        return 1;
    }

    int res = 0;
    unordered_set<char> used;
    for (int j = i; j < n; j++) {
        if (used.find(s[j]) == used.end()) {  
            used.insert(s[j]); 
            swap(s[i], s[j]);
            res += solver(s, i + 1);
            swap(s[i], s[j]);
        }
    }
    return res;
}

int main(){
	FASTIO;
    string s;
    cin>>s;
    solver(s);
    cout<<p.size()<<endl;
    sort(p.begin(), p.end());
    for(string i : p){
        cout<<i<<endl;
    }
    return 0;
}