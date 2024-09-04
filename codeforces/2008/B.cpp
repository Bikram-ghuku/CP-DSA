#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int x = sqrt(n);
        if(x * x != n) cout<<"NO"<<endl;
        else{
            int n1 = 0, n0 = 0, n1r = 4 * (x - 1);
            for(int i = 0; i < n; i++){
                if(s[i] == '1') n1++;
                else n0++;
            }
            
            if(n1 != n1r || n0 != (n - n1r)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}