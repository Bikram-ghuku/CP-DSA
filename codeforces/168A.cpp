#include <bits/stdc++.h>
using namespace std;

int ctt(const string &s) {
    int time = 2;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        int maxTime = 0;
        string bestPassword;

        for (char c = 'a'; c <= 'z'; c++) {
            for (int i = 0; i <= a.size(); i++) {
                string newPassword = a.substr(0, i) + c + a.substr(i);
                int currentTime = ctt(newPassword);
                if (currentTime > maxTime) {
                    maxTime = currentTime;
                    bestPassword = newPassword;
                }
            }
        }

        cout << bestPassword << endl;
    }
    return 0;
}
