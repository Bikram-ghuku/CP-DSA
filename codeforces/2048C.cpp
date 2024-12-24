#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;

#define FASTIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);



void solve(){
     string s;
        cin >> s;
        string a = s;

        pair<int, int> pb;


		int blen = 0, st = 0;
		for (int i = 0; i < (int)a.length(); i++) {
			if (a[i] == '0') {
				st = i;
				blen = (int)a.length() - i;
				break;
			}
		}

		if (blen == 0) {
			for (int i = 0; i < (int)s.length(); i++) {
				if (s[i] == '0') {
					pb = { i, i };
					break;
				}
			}
		}
		else {
			pb = { 0, 0 };
			string ans = a;

			for (int i = 0; i + blen <= (int)s.length(); i++) {
				string now = a;

				for (int j = i; j < i + blen; j++) {
					now[j - i + st] = ((now[j - i + st] - '0') ^ (s[j] - '0')) + '0';
				}

				if (now > ans) {
					ans = now;
					pb = { i, i + blen - 1 };
				}
			}
		}

		cout << 1 << ' ' << s.length() << ' ' << pb.first + 1 << ' ' << pb.second + 1 << '\n';
		
}

int main(){
		FASTIO;
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
