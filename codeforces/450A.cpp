#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    int pos;
    int count1=0;
    int count2=0;
    while(1){
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                continue;
            }
            if(arr[i]>m){
                arr[i]=arr[i]-m;
            }
            else if(arr[i]<=m){
                arr[i]=0;
                count1++;
                pos=i;
            }
        }
        if(count1==n){
            break;
        }
    }
    cout<<pos+1<<endl;

    return 0;
}