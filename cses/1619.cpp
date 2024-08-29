#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> start(n), end(n);
    for(int i = 0; i < n; i++){
        cin>>start[i]>>end[i];
    }

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    
    int i = 0, j = 0, sm = 0, mx = 0;
    while(i < n && j < n){
        if(start[i] < end[j]){
            sm++;
            i++;
        }else if(start[i] > end[j]){
            sm--;
            j++;
        }else{
            i++;
            j++;
        }

        mx = max(mx, sm);
    }

    cout<<mx<<endl;
}