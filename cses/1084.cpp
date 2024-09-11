#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> apl(n), apar(m);

    for(int i = 0; i < n; i++) cin>>apl[i];
    for(int i = 0; i < m; i++) cin>>apar[i];

    sort(apl.begin(), apl.end());
    sort(apar.begin(), apar.end());

    int j = 0, res = 0;
    
    for(auto i : apl){
        while(j < m){
            if(apar[j] > i + k) break;
            if(apar[j] < i - k){
                j++;
            }else{
                res++;
                j++;
                break;
            }
        }
    }

    cout<<res<<endl;

    return 0;
}